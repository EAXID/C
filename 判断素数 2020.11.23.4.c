//WL2002 2031053231 WXD
//2020年11月23日第4题 

#include<stdio.h>
int prime(int a); 
int main(void)

{
	printf("请输入数字");
	int m,n;
	scanf("%d",&m);
	n=prime(m);
	if(n)
	{
		printf("该数是素数"); 
	}
	else
	{
		printf("该数不是素数");
	}
	return 0;
}
	


int prime(int x)
{
	int k;
	for(k=2;k<x;k++)
	{
		if(x%k==0)
		{
			break;
		}
	}
	if(x==k)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
 } 

 
 
