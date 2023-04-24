#include<stdio.h>
int missingNumber(int* nums, int numsSize){
    int i = numsSize;
    int sum = (1+numsSize)*numsSize/2;
    while (i--) {
        sum=sum-nums[i];
    }
    return sum;
}
int main()
{
	int nums[]={0£¬1};
	missingNumber(nums,2);
	for(i=0;i<=2;i++)
	{
		printf("%d",nums[i]);
	
	}
	return 0;
}


