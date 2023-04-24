#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int data;
    struct TreeNode *LeftNode;
    struct TreeNode *RightNode;
}TreeNode;
/*�����������*/
int DeepTree(TreeNode * Node)
{
    if(Node == NULL)   return 0;
    int max,Hl,Hr;
    if(Node)
    {
        Hl = DeepTree(Node->LeftNode);
        Hr = DeepTree(Node->RightNode);
        max = (Hl>Hr)?Hl:Hr;
        return max+1;
    }
    else
        return 0;
}

/*�ж��Ƿ���ƽ�������    �ݹ��ж�*/
int IsBalence(TreeNode *Node)
{
    int ret=0,left_deep=0,right_deep=0;
    if(Node == NULL)   return 1;
    /*���жϸ��ڵ��������������*/
    left_deep  = DeepTree(Node->LeftNode);
    right_deep = DeepTree(Node->RightNode);
    ret = left_deep - right_deep;
    if(ret>1 || ret<-1)
        return 0;
    else    /*�����ж�ÿһ���ڵ�*/
        return (IsBalence(Node->LeftNode) && IsBalence(Node->RightNode));
}

/*�������*/
void MidSearch(TreeNode *Node)
{
    if(Node)
    {
        MidSearch(Node->LeftNode);
        printf("%d  ",Node->data);
        MidSearch(Node->RightNode);
    }
}


/*��������  �ݹ�д��*/
void InsertNode1(TreeNode **Node,int data)
{
    if((*Node) == NULL)
    {
        (*Node) = (TreeNode *)malloc(sizeof(TreeNode));
        (*Node)->data = data;
        (*Node)->LeftNode = (*Node)->RightNode = NULL;
    }
    else
    {
        if(data > (*Node)->data)
            InsertNode1(&(*Node)->RightNode,data);
        else
            InsertNode1(&(*Node)->LeftNode,data);
    }
}

/*������   �ݹ�ʵ��*/
void destroy(TreeNode *Node)
{
    if(Node)
    {
        destroy(Node->LeftNode);
        destroy(Node->RightNode);
        free(Node);
    }
}

int main(void)
{
    TreeNode *Node = NULL;
    int ret = 0;int deep;
    int data[]={5,7,7,1,4,6,8,0,2};
    int i,num =9;

    for(i=0;i<num;i++)
    {
         InsertNode(&Node,9);
        InsertNode1(&Node,9);
    }

    MidSearch(Node);

    deep = DeepTree(Node);
    printf("deep = %d\n",deep);
    printf("\n");
    ret = IsBalence(Node);
    printf("%d\n",ret);
    if(ret == 1)
        printf("balance \n");
    else
        printf("fail \n");

    destroy(Node);

    return 0;
}






