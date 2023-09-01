
bool check(struct TreeNode* p, struct TreeNode* q)
{
    if(p == NULL && q == NULL)
        return true;
    if(p == NULL || q == NULL)
        return false;
    if(p->val == q->val)
        return check(p->left, q->right) && check(p->right, q->left);
    else
        return false;
}
bool isSymmetric(struct TreeNode* root){
    return check(root, root);
}

