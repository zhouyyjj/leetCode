#include <stdio.h>
#include <stdlib.h> 

int main()
{
 int x,tem,revertedNumber,num;
 char figure = 0; 
 
 
 printf("��������X:");
 scanf("%d",&x); 
 
 if(x < 0 || (x % 10) == 0)//�����Լ���λΪ������֣�һ�����ǻ������� 
 {
  printf("no");
  return 0;
 }

 tem = x;
 
 while(tem)//�ж�����������Ǽ�λ���� 
 {
  figure++; 
  tem /= 10;
 } 
 
 num = figure / 2;//������λ������2��ֻ��Ҫ�ж�һ�����ֵ�ǰһ����ڵ���ĺ�һ�� 
 revertedNumber = 0; 
 
 for(int i = 0; i < num; i++)  
 {
  revertedNumber = (revertedNumber * 10) + (x % 10); 
  x /= 10;
 }
 if(figure%2 != 0)//����������λ��Ϊ������Ҫ�����м��������ȥ �����ܱȽ�ǰһ���Լ���һ������ 
  x /= 10;
  
 if(x == revertedNumber )
  printf("yes");
 else
  printf("no"); 
  
 return 0; 
     
}


