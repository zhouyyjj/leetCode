#include<stdio.h> 
int findPeakElement(int* nums, int numsSize){
    int low=0, high=numsSize-1, mid;

    while(low < high){
        mid = (low + high) / 2;         
        if(nums[mid] > nums[mid+1]){    //峰值为num[mid]或在num[mid]的左侧
            high = mid;
        }else{                          
            low = mid+1;
        }
    }

    return low;

}
int main()
{
	int nums[]={1,2,3,1};
	int a=findPeakElement(nums,4);
	printf("%d",a);
	return 0;
}


