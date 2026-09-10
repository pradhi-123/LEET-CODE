/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {

    char** result = malloc(2 * n * sizeof(char*));
    *returnSize = 0;

    int j = 0;

    for (int i = 1; i <= n && j < targetSize; i++) {

        result[*returnSize] = malloc(5 * sizeof(char));

        if (i == target[j]) {
            strcpy(result[*returnSize], "Push");
            (*returnSize)++;
            j++;
        }
        else {
            strcpy(result[*returnSize], "Push");
            (*returnSize)++;

            result[*returnSize] = malloc(5 * sizeof(char));
            strcpy(result[*returnSize], "Pop");
            (*returnSize)++;
        }
    }

    return result;
}