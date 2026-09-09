/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode *curr = head;
    struct ListNode *prev = NULL;
    struct ListNode *next = NULL;
    struct ListNode *temp = head;
    int count = 0;
    while (temp != NULL && count < k)
    {
        temp = temp->next;
        count++;
    }
    if (count < k)
        return head;
    count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    head->next = reverseKGroup(curr, k);
    return prev;
}