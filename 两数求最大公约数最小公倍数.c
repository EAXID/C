//WL2002 2031053231 WXD
// calcuation the greatest common divisor and least common multiple of two intergers

#include<stdio.h>

int main(void)
{
	int m,n,r,multiple,a,b,c;
	scanf("%d%d",&m,&n);
	a=m,b=n;
	r=m%n;
	while(r!=0)
	{
	   	m=n;
		n=r;
		r=m%n;
	}
	multiple=a*b/n;
	printf("lowest common multiple LCM is £º%d\n",multiple);
	printf("greatest common divisor gcd is : %d\n",n);
	return 0;
}
