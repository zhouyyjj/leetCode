#include<stdio.h>
bool isPowerOfThree(int n){
    if(n < 1) return false;
    if(n == 1) return true;
    if(n % 3 == 0) 
	return isPowerOfThree(n/3);
    else return false;
}

int main()
{
	int i;
	printf("请输入一个数："); 
	scanf("%d",&i); 
	isPowerOfThree(i);
	printf("%d",	isPowerOfThree(i));
	return 0;
}
