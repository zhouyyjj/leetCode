#include<stdio.h> 
int reverse(int x){//最简便的思路
    int a;
    int i;
    long c=0;//C一定要定义为long型才不会越界
    for(i=0;i<20;i++)
    {
    //处理反转的标准解答模板
        a=x%10;
        x=x/10;
        c=a+c*10;
     //判断是否会越界
       if( c>0x7fffffff || c<(signed int)0x80000000)
       {
           return 0;
       }
        if(x==0)
            break;
    }
        return c;
}
int main()
{
	int x;
	scanf("%d",&x);
	reverse(x);
	return 0;
	 
}



