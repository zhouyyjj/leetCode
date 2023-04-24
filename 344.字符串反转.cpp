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
 reverse(start, end);   //先将整句话倒置 ?uoy era woh
 char* str = arr;
 int i = 0;
 for (i = 0; i <= len; i++)    //通过空格和最后的'\0'拆分单词，将每个单词倒置
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

