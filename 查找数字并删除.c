//WL2002 2031053231 WXd
//Search delete number

#include<stdio.h>
int main(void)
{
	int number,i;
	printf("请输入元素个数");
	scanf("%d",&number);
	int array[number];
	printf("请输入元素");
	for(i=0;i<number;i++)
	{
		scanf("%d",&array[i]);
	}
	int data; 
	printf("请输入要查找的元素"); 
	scanf("%d",&data); 
	for(i=0;i<number;i++)
	{
		if(data==array[i])
		{
			for(;i<number;i++)
			array[i]=array[i+1];
		}
    } 
	for(i=0;i<(number-1);i++)
	{
		printf("%4d",array[i]);
	}
	return 0;
 } 
