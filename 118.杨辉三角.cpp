#include<stdio.h>
int main()
{
 int a[10][10],i,j;
 
 for(i=0;i<10;i++)
 {
  for(j=0;j<=i;j++)//如果j<n的话，杨辉三角的上半部分就会是乱码 
  {
   if(i==j||j==0)
   {
    a[i][j]=1;
   }
   else
   {
    a[i][j]=a[i-1][j-1]+a[i-1][j];
   }
  }
 }
 for(i=0;i<10;i++)
 {
  for(j=0;j<=i;j++)
  {
   printf("%5d",a[i][j]);
  }
  printf("\n");
 }
 return 0;
 
 } 

