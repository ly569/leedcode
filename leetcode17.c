/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* printNumbers(int n, int* returnSize){
    int len = pow(10, n);
    int *arr = malloc(sizeof(int) * len);
    for (int i = 1; i < len; i++) {
        arr[i - 1] = i;
    }
    *returnSize = len - 1;
    return arr;
}