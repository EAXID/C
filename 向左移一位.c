//WL20002 2031053231 WXD
//One to the left 

#include<stdio.h>

int main(void)
{
	int number,n,a;
	printf("请输入元素个数\n");
	scanf("%d",&number);
	int array[number];
	printf("请输入元素"); 
	for(n=0;n<number;n++)
	{
		scanf("%d",&array[n]);
		if(n==0)
		{
			a=array[0];
		}
		else
		{
			array[n-1]=array[n];
		}
	}
	array[n-1]=a;
    for(n=0;n<number;n++)
    {
    	printf("%4d",array[n]);
	}
	return 0;
} 
