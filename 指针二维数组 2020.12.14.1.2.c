//WL2002 2031053231 WXD
//2020.12.14.1.2

#include<stdio.h>
void intputTDArray(int row,int collumn,int (*arrayPrt)[collumn]);
void outputTDArray(int row,int collumn,int (*arrayPrt)[collumn]);

int main(void)
{
	int row,collumn;
	printf("请输入列数");
	scanf("%d",&row);
	printf("请输入行数");
	scanf("%d",&collumn);
	int array[row][collumn];
	int (*arrayPrt)[collumn];
	arrayPrt=array;
	printf("请输入数组"); 
	intputTDArray(row,collumn,arrayPrt);
	outputTDArray(row,collumn,arrayPrt);
} 

int i,j;
void intputTDArray(int row,int collumn,int (*arrayPrt)[collumn])
{
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			scanf("%d",*(arrayPrt+i)+j);
		}
	}
}

void outputTDArray(int row,int collumn,int (*arrayPrt)[collumn])
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			printf("%4d",*(*(arrayPrt+i)+j));
		}
		printf("\n");
	}
}
