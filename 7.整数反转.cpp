#include<stdio.h> 
int reverse(int x){//�����˼·
    int a;
    int i;
    long c=0;//Cһ��Ҫ����Ϊlong�ͲŲ���Խ��
    for(i=0;i<20;i++)
    {
    //����ת�ı�׼���ģ��
        a=x%10;
        x=x/10;
        c=a+c*10;
     //�ж��Ƿ��Խ��
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



