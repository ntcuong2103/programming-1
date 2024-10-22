#include<math.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* toBinary(int n, int* returnSize)
{
    // allocate integer array for output
    int size = (int)floor(log2(n)) + 1;
    int* out = malloc(size * sizeof(int));
    *returnSize = size;

    // convert n to binary 
    for(int i = 0; i <size; i++)
    {
        out[i] = n % 2;
        n = n / 2;
    }

    return out;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    int* out = malloc(2 * sizeof(int));
    *returnSize = 2;

    int binSize;
    int* bin = toBinary(n, &binSize);

    // count number of 1s in even and odd bits
    int even = 0;
    int odd = 0;
    for(int i = 0; i < binSize; i++)
    {
        if(i % 2 == 0)
        {
            even += bin[i];
        }
        else
        {
            odd += bin[i];
        }
    }
    out[0] = even;
    out[1] = odd;

    free(bin);
    return out;
}

int main()
{
    int retSize;
    int* ret = evenOddBit(10, &retSize);
    for(int i = 0; i < retSize; i++)
    {
        printf("%d ", ret[i]);
    }
    free(ret);
    return 0;
}