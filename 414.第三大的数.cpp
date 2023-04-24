#include<stdio.h>
int thirdMax(int* nums, int numsSize) {
 int i, j;
 for (i = 0; i < numsSize-1; i++) {
  for (j = 0; j < numsSize - 1 - i; j++) {
   if (nums[j] < nums[j + 1]) {
    int tmp = nums[j];
    nums[j] = nums[j + 1];
    nums[j + 1] = tmp;
   }
  }
 }
 if (numsSize < 3) {
  return nums[0];
  }
 int flag = 1;
 for (i = 1; i < numsSize; i++) {
  if (nums[i] != nums[i - 1]) {
   flag++;
  }
  if (flag == 3) {
   return nums[i];
  }
 }
 return nums[0];
}

int main()
{
	int nums[]={3,2,1};
	int i=thirdMax(nums,3);
	printf("第三大的数为%d",i);
	return 0;
}



