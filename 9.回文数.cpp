#include <stdio.h>
#include <stdlib.h> 

int main()
{
 int x,tem,revertedNumber,num;
 char figure = 0; 
 
 
 printf("输入数字X:");
 scanf("%d",&x); 
 
 if(x < 0 || (x % 10) == 0)//负数以及个位为零的数字，一定不是回文数。 
 {
  printf("no");
  return 0;
 }

 tem = x;
 
 while(tem)//判断输入的数字是几位数。 
 {
  figure++; 
  tem /= 10;
 } 
 
 num = figure / 2;//将数字位数除以2，只需要判断一个数字的前一半等于倒序的后一半 
 revertedNumber = 0; 
 
 for(int i = 0; i < num; i++)  
 {
  revertedNumber = (revertedNumber * 10) + (x % 10); 
  x /= 10;
 }
 if(figure%2 != 0)//若输入数字位数为奇数，要将正中间的数字消去 ，才能比较前一半以及后一半数字 
  x /= 10;
  
 if(x == revertedNumber )
  printf("yes");
 else
  printf("no"); 
  
 return 0; 
     
}


