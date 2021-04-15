//Wl2002 2031053231 WXD
//2020.12.14.3 

#include<stdio.h>
void intputTDArray(int *arrayPtr,int row,int collumn);
void outputTDArray(int *arrayPtr,int row,int collumn);
int inverseMatrix(int *arrayPtr,int row,int collumn);
int main(void)

{
	int row,collumn;
	printf("请输入列行数");
	scanf("%d",&collumn);
	row=collumn;
	int array2[row][collumn],a2[collumn][row];
	int array[row][collumn];
	int *arrayPtr;
	arrayPtr=&array[0][0];
	printf("请输入数组"); 
	intputTDArray(arrayPtr,row,collumn);
	inverseMatrix(arrayPtr,row,collumn);
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

int inverseMatrix(int *arrayPtr,int row,int collumn)
{
	int i,j,temp;
	for(i=0;i<row;i++)
	{
		for(j=i;j<collumn;j++)
		{
			temp=*(arrayPtr+i*collumn+j);
			*(arrayPtr+i*collumn+j)=*(arrayPtr+j*collumn+i);
			*(arrayPtr+j*collumn+i)=temp;
		}
	}
 } 
