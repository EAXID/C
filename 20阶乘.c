//WL2002 203053231 WXD
//The sum from 1 to 20 factorials

#include<stdio.h>

int main(void)
{
	int p,sum,i,n;
	for(sum=0,i=1;i<=20;i++)
	{
		for(p=1,n=1;n<=i;n++)
		{
			p=p*n;
		}
		sum=sum+p;
	} 
	printf("sum=%d",sum);
	return 0;
 } 
