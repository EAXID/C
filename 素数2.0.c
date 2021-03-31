//WL2002 2031053231 WXD
//Prime Numbers form 3 to 100

#include<stdio.h>
int main(void)

{
	printf("please enter a number greather than or equal to 3 less than or equal to 100/n");
	int x,k,array[100];
	for(x=2;x<=100;x++)
	{
		for(k=2;k<x;k++)
		{
			if(x%k==0)
			{
				break;
			}
		}
		if(x==k)
		{
			array[k]=x;
		}
	}
	return 0;
 } 
