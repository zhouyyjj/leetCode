#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
 int n;
 int a[101];
 int count, max=0;
 printf("���ݸ���:\n");
 scanf("%d", &n);
 int i, j, k = 0;
 for (i = 1; i <= n; ++i)           //ѭ����������
 {
  scanf("%d", &a[i]);
 }
 for (i = 1; i <= n; ++i)           //����ÿһ������
 {
  count = 0;
  for (j = 1; j <= n; ++j)
  {
   if (a[i] == a[j] && i != j)       //������ͬ�����ݣ���������1
   {
    count++;
   }
  }
  if (count > max)                //Ѱ������ͬ����������
  {
   max = count;
   k = a[i];
  }
 }
 printf("%d\n",k);
 return 0;
}


