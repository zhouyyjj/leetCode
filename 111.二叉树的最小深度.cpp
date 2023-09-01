/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    //结束条件
    if(root == NULL)
    {
        return 0;
    }

    //单次递归
    int L=minDepth(root->left) + 1;
    int R=minDepth(root->right) + 1;
    if(L>1 && R>1)//root必须要有左右孩子，即最小深度必须大于等于2，避免左右子树没有节点的情况，根节点不能作为子节点
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

