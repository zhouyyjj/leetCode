#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
 int n;
 int a[101];
 int count, max=0;
 printf("数据个数:\n");
 scanf("%d", &n);
 int i, j, k = 0;
 for (i = 1; i <= n; ++i)           //循环存入数据
 {
  scanf("%d", &a[i]);
 }
 for (i = 1; i <= n; ++i)           //遍历每一个数据
 {
  count = 0;
  for (j = 1; j <= n; ++j)
  {
   if (a[i] == a[j] && i != j)       //遇到相同的数据，计数器加1
   {
    count++;
   }
  }
  if (count > max)                //寻找有相同数据最多的数
  {
   max = count;
   k = a[i];
  }
 }
 printf("%d\n",k);
 return 0;
}


