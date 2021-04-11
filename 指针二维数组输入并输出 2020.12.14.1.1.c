//Wl2002 2031053231 WXD
//2020.12.14.1.1

#include<stdio.h>
void intputTDArray(int *arrayPtr,int row,int collumn);
void outputTDArray(int *arrayPtr,int row,int collumn);

int main(void)
{
	int row,collumn;
	printf("请输入列数");
	scanf("%d",&row);
	printf("请输入行数");
	scanf("%d",&collumn);
	int array[row][collumn];
	int *arrayPtr;
	arrayPtr=&array[0][0];
	printf("请输入数组"); 
	intputTDArray(arrayPtr,row,collumn);
	outputTDArray(arrayPtr,row,collumn);
} 

int i,j;
void intputTDArray(int *arrayPtr,int row,int collumn)
{
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			scanf("%d",arrayPtr+i*collumn+j);
		}
	}
}

void outputTDArray(int *arrayPtr,int row,int collumn)
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			printf("%4d",*(arrayPtr+i*collumn+j));
		}
		printf("\n");
	}
}
