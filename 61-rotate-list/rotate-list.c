/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* temp;
    struct ListNode* temp2;
    int n=1;
    temp=head;
    if(head==NULL || head->next==NULL)
      return head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        n++;
    }
    k=k%n;
    for(int i=0;i<k;i++)
    {
        temp=head;
        while(temp->next->next!=NULL)
            temp=temp->next;
        temp2=head;
        head=temp->next;
        temp->next=NULL;
        head->next=temp2;
    }
    return head;
}