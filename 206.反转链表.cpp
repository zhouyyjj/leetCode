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
 head->next=NULL;//链表初始化 
 printf("请输入链表长度：");
 scanf("%d",&n);//输入链表长度 
 printf("请输入链表："); 
 nailcreate(n,head);
 head=head->next;
 printf("反转后的链表为：");
 output(head);
 return 0;
}


