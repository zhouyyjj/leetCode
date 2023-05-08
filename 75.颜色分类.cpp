#include<stdio.h> 
void sortColors(int* nums, int numsSize)
{
    int red = -1, blue = numsSize;

    for(int i = 0; i < blue; )
    {
        if(nums[i] == 1)
        {
            i++;
        }
        else if(nums[i] == 2)
        {
            blue --;
            nums[i] = nums[blue];
            nums[blue] = 2;    
        }
        else 
        {
            red++;
            nums[i] = nums[red];
            nums[red] = 0;
            i++;
        }
    }
}
int main()
{
	int nums[3]={2,0,1};
	int numsSize;
	sortColors(nums,numsSize);
	int *arr= sortColors(nums,&numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;	
}


