#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int left = 0;
    for (int right = 0; right < numsSize; right++) {
        if (nums[right] != val) {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;
}

int main() {
 int nums[] = {0,1,2,2,3,0,4,2};
 int val = 2;
 int numsSize = sizeof(nums)/sizeof(nums[0]);
 int a = removeElement(nums, numsSize, val);
 for (int i = 0; i < a; i++) {
  printf("%d ", nums[i]);
 }
 return 0;
}

