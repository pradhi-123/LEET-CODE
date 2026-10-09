/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* ans = (int*)malloc(nums1Size * sizeof(int));
    *returnSize = nums1Size;
    for (int i = 0; i < nums1Size; i++) 
    {
        ans[i] = -1;
        for (int j = 0; j < nums2Size; j++) 
        {
            if (nums2[j] == nums1[i]) 
            {
                for (int k = j + 1; k < nums2Size; k++) 
                {
                    if (nums2[k] > nums1[i]) 
                    {
                        ans[i] = nums2[k];
                        break;
                    }
                }
                break;
            }
        }
    }
    return ans;
    
}