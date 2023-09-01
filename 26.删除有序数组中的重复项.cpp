#include <stdio.h>
 
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
 
int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int newSize = removeDuplicates(nums, size);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
