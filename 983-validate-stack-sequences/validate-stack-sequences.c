bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize) {
    int stack[pushedSize];
    int top = -1;
    int j = 0;
    for (int i = 0; i < pushedSize; i++) {
        stack[++top] = pushed[i];
        while (top >= 0 && j < poppedSize && stack[top] == popped[j]) {
            top--;
            j++;
        }
    }
    return j == poppedSize;
}