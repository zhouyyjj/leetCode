#include<stdio.h>
#include<stdlib.h>
//����һ������int *�ĺ���ָ��,��Ϊ���Ҫ��һ�����������ܺ����ķ���ֵ
//int *digits�����������飬digitsSize��������Ĵ�С
int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    int i;
    //������һ����ԭ����������
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
    //ȫΪ9�����
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
    //returnsize������Ĵ�С������ȫ�ֱ���
    int* arr = plusOne(digits, 3, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}




