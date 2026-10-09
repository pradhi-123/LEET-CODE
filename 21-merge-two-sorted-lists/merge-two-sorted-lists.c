/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* list3;
    list3=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp=list3;
    if(list1==NULL)
        return list2;
    else if(list2==NULL)
        return list1;
    while(list1!=NULL&&list2!=NULL)
    {
        struct ListNode* newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
        if(list1->val<=list2->val)
        {
            newNode->val=list1->val;
            newNode->next=NULL;
            if(temp==NULL)
                temp=newNode;
            else
                temp->next=newNode;
            list1=list1->next;
        } 
        else
        {
            newNode->val=list2->val;
            newNode->next=NULL;
            if(temp==NULL)
                temp=newNode;
            else
                temp->next=newNode;
            list2=list2->next;
        }
        temp=temp->next;
        if(list1==NULL)
            temp->next=list2;
        else if(list2==NULL)
            temp->next=list1;
    }
    return list3->next;
}