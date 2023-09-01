struct ListNode* removeElements(struct ListNode* head, int val){
    if(!head)
    return head;
    struct ListNode* cur=head;
    
struct ListNode* new=(struct ListNode*)malloc(sizeof(struct ListNode));
    new->next=NULL;
    struct ListNode* newhead=new;
    struct ListNode* ren=new;
    while(cur)
    {
        if(cur->val!=val)
        {
            ren=new;
            new->val=cur->val;
            struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
            node->next=NULL;
            new->next=node;
            new=new->next;
        }
        cur=cur->next;
    }
    free(ren->next);
    ren->next=NULL;
    if(new==newhead)
    {
        newhead=NULL;
    }
    return newhead;
}

