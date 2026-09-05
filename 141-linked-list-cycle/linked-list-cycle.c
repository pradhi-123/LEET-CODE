/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head==NULL)
       return false;
    struct ListNode* temp;
    struct ListNode* temp1;
    temp=head;
    temp1=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        temp=temp->next->next;
        temp1=temp1->next;
        if(temp==NULL)
           return false;
        if(temp==temp1)
           return true;
    }
    return false;
}