#include<stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 *
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head1=list1,*head2=list2,*head=NULL,*end=NULL,*newnode;
    while(head1!=NULL&&head2!=NULL)
    {
        newnode=(struct ListNode *)malloc(8*sizeof(struct ListNode));
        newnode->next=NULL;
        if(head1->val<=head2->val)
        {
            
            newnode->val=head1->val;
            head1=head1->next;
            
        }
        else
        {
            newnode->val=head2->val;
            head2=head2->next;
        }
        if(head==NULL){
            head=end=newnode;
        }
        else{
            end->next=newnode;
            end=newnode;
        }

    }
     while (head1 != NULL) {
        newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val = head1->val;
        newnode->next = NULL;
        if (head == NULL) {
            head = end = newnode;
        } else {
            end->next = newnode;
            end = newnode;
        }
        head1 = head1->next;
    }

    while (head2 != NULL) {
        newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val = head2->val;
        newnode->next = NULL;
        if (head == NULL) {
            head = end = newnode;
        } else {
            end->next = newnode;
            end = newnode;
        }
        head2 = head2->next;
    }
    return head;
}