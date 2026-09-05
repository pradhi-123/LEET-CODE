/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* temp;
    struct ListNode* t;
    struct ListNode* prev=NULL;
    temp=head;
    if(temp==NULL || temp->next==NULL)
        return head;
    head=temp->next;
    while(temp!=NULL && temp->next!=NULL)
    {
        t=temp;
        temp=temp->next;
        t->next=temp->next;
        temp->next=t;
        if(prev!=NULL)
            prev->next=temp;
        prev=t;
        temp=t->next;
    }
    return head;
}