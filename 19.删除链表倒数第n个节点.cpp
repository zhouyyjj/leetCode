struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    //��������ͷ�ڵ�dummy ����ʼ��ʹ��ָ��head
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = head;
    //���� fast slow ˫ָ��
    struct ListNode* fast = head;
    struct ListNode* slow = dummy;

    for (int i = 0; i < n; ++i) {
        fast = fast->next;
    }
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;//ɾ��������n���ڵ�
    head = dummy->next;
    free(dummy);//ɾ������ڵ�dummy
    return head;
}





