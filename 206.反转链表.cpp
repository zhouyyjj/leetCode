#include <stdio.h>
#include <stdlib.h>
typedef struct nodef
{
 int data;
 struct nodef *next;
} *linklist;
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr) {
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}


int main()
{
 linklist head;
 int n; 
 head=(linklist)malloc(sizeof(linklist));
 head->next=NULL;//�����ʼ�� 
 printf("�����������ȣ�");
 scanf("%d",&n);//���������� 
 printf("����������"); 
 nailcreate(n,head);
 head=head->next;
 printf("��ת�������Ϊ��");
 output(head);
 return 0;
}


