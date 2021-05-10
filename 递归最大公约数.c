//第六题
#include<stdio.h>
int f(int a,int b);
int main()
{
	int x,y;
	printf("请输入x和y\n");
	scanf("%d%d",&x,&y);
	printf("%d和%d最大公约数为%d",x,y,f(x,y));
	return 0;
} 
int f(int a,int b)
{
	if(a<0||b<0)
	{
		return 0;
	}
	else if(a%b==0)
	{
		return b;
	}
	else
	{
		f(b,a%b);
	}
}

