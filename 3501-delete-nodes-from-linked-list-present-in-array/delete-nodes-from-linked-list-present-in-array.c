//
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    int arr[100001] = {0};
    for(int i = 0; i < numsSize; i++)
        arr[nums[i]] = 1;

    while(head != NULL && arr[head->val])
        head = head->next;

    struct ListNode* temp = head;

    while(temp != NULL && temp->next != NULL) {
        if(arr[temp->next->val])
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }
    return head;
}