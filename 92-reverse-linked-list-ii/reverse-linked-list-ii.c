/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(head==NULL || left==right)
       return head;
    struct ListNode *temp=head;
    struct ListNode *temp1=NULL;
    struct ListNode *start=head;
    int c=1;
    while(c<left)
    {
        temp1=start;
        start=start->next;
        c++;
    }
    temp=start->next;
    while(c<right)
    {
        start->next=temp->next;
        if(temp1!=NULL)
        {
           temp->next=temp1->next;
           temp1->next=temp; 
        }
        
        else
        {
            temp->next=head;
            head=temp;
        }
        temp=start->next;
        c++;
    }
    return head;
}