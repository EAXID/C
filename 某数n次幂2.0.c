// WL2002 2031053231 wxd
//ask for the n-power of an integer

#include<stdio.h>

int main (void)
{
	printf("Please enter base number and index\n");
	int data,n,power,i;
	scanf("%d%d",&data,&n);
	for(i=1,power=1;i<=n;i++)
	{
		power=power*data;
	}
	printf("power=%d",power);
	return 0; 
 } 
