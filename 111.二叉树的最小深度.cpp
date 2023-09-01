/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    //��������
    if(root == NULL)
    {
        return 0;
    }

    //���εݹ�
    int L=minDepth(root->left) + 1;
    int R=minDepth(root->right) + 1;
    if(L>1 && R>1)//root����Ҫ�����Һ��ӣ�����С��ȱ�����ڵ���2��������������û�нڵ����������ڵ㲻����Ϊ�ӽڵ�
    {
        if(L < R)
        {
            return L;
        }
        else
        {
            return R;
        }        
    }
    else if(L > 1)
    {
        return L;
    }
    else
    {
        return R;
    }
}

