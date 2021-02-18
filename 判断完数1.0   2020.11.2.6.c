//WL2002 2031053231 WXD
//Determine the number of

#include<stdio.h>

int main(void)
{
	int data,i,a;
	scanf("%d",&data);
	i=2,a=1;
	while(i<data)
	{
		if(data%i==0)
		{
			a=a+i;
			i++;
		}
		else
		{
			a=a;
			i++;
		}
	}
	if(a==data)
	{
		printf("Number %d is finished",data);
	}
	else
	{
		printf("%d is not a complete number",data);
	}
	return 0;
}
