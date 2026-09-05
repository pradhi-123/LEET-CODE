/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *temp;
    struct ListNode *temp1;
    if(head==NULL || head->next==NULL)
        return head;
    temp=head->next;
    temp1=head;
    while(head->next!=NULL)
    {
        head->next=temp->next;
        temp->next=temp1;
        temp1=temp;
        temp=head->next;
    }
    return temp1;
}