#include<stdio.h>
int bubble_sort(int arr[], int sz)//�β�arr��������ָ��
{
	int i = 0;//ȷ������
	int j = 0;
	int max1 = 0;
	int max2 = 0;
	for (i = 0; i < sz - 1; i++)  //��������
	{
		for (j = 0; j < sz - 1 - i; j++)//����һ�˱�ǰ��һ���ټ���һ��
		{
			if (arr[j] > arr[j + 1])
			{
				//��������
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	if (arr[0] < 0 && arr[1] < 0) //����������С��0ʱ
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
	//����Ϊ���򣬲���ð������
	int arr[] = { -10,-1,9,8,7 };
	//����Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]); //���������С
	int ret = bubble_sort(arr, sz);
	printf("%d", ret);
	return 0;
}

