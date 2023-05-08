#include<stdio.h>
#include<stdlib.h>
//创建一个返回int *的函数指针,因为最后要有一个数组来接受函数的返回值
//int *digits参数接受数组，digitsSize代表数组的大小
int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    int i;
    //申请了一个比原数组大的数组
    int* ree = (int*)malloc((digitsSize + 1) * sizeof(int));
    for (i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i] = digits[i] + 1; break;
        }
        else
        {
            digits[i] = 0;
        }
    }
    //全为9的情况
    if (digits[0] == 0)
    {
        int j;
        for (j = i; j < digitsSize + 1; j++)
        {
            ree[j] = 0;
        }
        ree[0] = 1;
        *returnSize = digitsSize + 1;
        return ree;
    }
    else
    {
        *returnSize = digitsSize;
        return digits;
    }
    free(ree);
    ree = NULL;

}

int main()
{
    int digits[] = {9,9,9 };
    int returnSize;
    //returnsize是数组的大小，且是全局变量
    int* arr = plusOne(digits, 3, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}




