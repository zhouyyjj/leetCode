#include <stdio.h>
#include <string.h>
 
void reverse(char* left,char* right)
{
 char tmp = 0;
 while (left<right)
 {
  tmp = *left;
  *left = *right;
  *right = tmp;
  left++;
  right--;
 }
}
 
int main()
{
 char arr[100] = { 0 };
 gets(arr);   //How are you?
 char* start = arr;
 int len = strlen(arr);
 char* end = arr + len - 1;
 reverse(start, end);   //�Ƚ����仰���� ?uoy era woh
 char* str = arr;
 int i = 0;
 for (i = 0; i <= len; i++)    //ͨ���ո������'\0'��ֵ��ʣ���ÿ�����ʵ���
 {
  if (*str == ' ' || *str == '\0')
  {
   reverse(start, str - 1);
   start = str + 1;
  }
  str++;
 }
 printf("%s\n", arr);
 return 0;
}

