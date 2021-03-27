//WL2002 2031053231 WXD
// calcuation the greatest common divisor and least common multiple of two intergers

#include<stdio.h>
int acdivisor(int m,int n);
int main(void)
{
	int f,d,e;
	scanf("%d%d",&f,&d);
	e=acdivisor(f,d);
	printf("这两数的最大公约数：%d\n",e);
	return 0;
}


int acdivisor(int m,int n)
{
	int r,multiple;
	r=m%n;
	while(r!=0)
	{
	   	m=n;
		n=r;
		r=m%n;
	}
	return n;
}
