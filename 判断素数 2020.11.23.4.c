//WL2002 2031053231 WXD
//2020��11��23�յ�4�� 

#include<stdio.h>
int prime(int a); 
int main(void)

{
	printf("����������");
	int m,n;
	scanf("%d",&m);
	n=prime(m);
	if(n)
	{
		printf("����������"); 
	}
	else
	{
		printf("������������");
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

 
 
