#include<math.h>

int* toBinary(int n, int* returnSize)
{
    // allocate integer array for output
    int size = (int)floor(log2(n)) + 1;
    int* out = malloc(size * sizeof(int));
    *returnSize = size;

    // your implementation: convert to binary (assign result -> out)

    return out;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    int* out = malloc(2 * sizeof(int));

    int binSize;
    int* bin = toBinary(n, &binSize);

    // your implementation

    free(bin);
    return out;
}

int main()
{
    int retSize;
    int* ret = evenOddBit(17, &retSize);
    free(ret);
    return 0;
}