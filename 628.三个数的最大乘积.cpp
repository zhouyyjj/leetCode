#include<stdio.h>
int bubble_sort(int arr[], int sz)//形参arr，本质是指针
{
	int i = 0;//确定趟数
	int j = 0;
	int max1 = 0;
	int max2 = 0;
	for (i = 0; i < sz - 1; i++)  //排序数组
	{
		for (j = 0; j < sz - 1 - i; j++)//后面一趟比前面一趟少计算一次
		{
			if (arr[j] > arr[j + 1])
			{
				//交换过程
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	if (arr[0] < 0 && arr[1] < 0) //当有两个数小于0时
	{
		max1 = arr[0] * arr[1] * arr[sz - 1];
	}
	max2 = arr[sz - 1] * arr[sz - 2] * arr[sz - 3];
	if (max1 > max2)
	{
		return max1;
	}
	return max2;
}
int main()
{
	int m;
	//排序为升序，采用冒泡排序法
	int arr[] = { -10,-1,9,8,7 };
	//计算元素个数
	int sz = sizeof(arr) / sizeof(arr[0]); //计算数组大小
	int ret = bubble_sort(arr, sz);
	printf("%d", ret);
	return 0;
}

