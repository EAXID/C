//WL2002 2031053231 WXD
//Find the first twenty terms of the fibonacci sequence

#include<stdio.h>  
int main(void)
{
	int F1,F2,Fn,n,a,b,i;
	scanf("%d",&n);
	if(n<3)
	{
		printf("1");
	}
	else
	{
		for(F1=1,F2=1,i=0;i<=n-3;i++)
		{
			Fn=F1+F2;
			F1=F2;
			F2=Fn;
		}
		printf("%d",Fn);
	}
	return 0;
}
