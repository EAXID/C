//WL2002 2031053231 WXD
//2020.12.11.1

#include<stdio.h>
int intputArray(int num,int *arrayPrt);
int outputArray(int num,int *arrayPrt);
int main(void)
{
	int number;
	printf("请输入数组长度");
	scanf("%d",&number);
	printf("请输入数据");
	int array2[number];
	int *arrayPrt;
	arrayPrt=array2;
	intputArray(number,arrayPrt);
	printf("输入的数组是\n");
	outputArray(number,arrayPrt);
	return 0;
}


int intputArray(int num,int *arrayPrt)
{
	int *p=arrayPrt;
	for(arrayPrt=p;arrayPrt<p+num;arrayPrt++)
	{
		scanf("%d",arrayPrt);
	}
	return 0;
}

int outputArray(int num,int *arrayPrt)
{
	int *p=arrayPrt;
	for(arrayPrt=p;arrayPrt<p+num;arrayPrt++)
	{
		printf("%5d",*arrayPrt);
	}
	return 0;
}
