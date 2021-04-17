//Wl2002 2031053231 WXD
//2020.12.14.5 

#include<stdio.h>
void intputTDArray(int *arrayPtr,int row,int collumn);
void sysmmetric (int *arrayPtr,int row,int collumn);
int main(void)

{
	int row,collumn;
	printf("请输入列行数");
	scanf("%d",&collumn);
	row=collumn;
	
	int array[row][collumn];
	int *arrayPtr;
	arrayPtr=&array[0][0];
	printf("请输入数组"); 
	intputTDArray(arrayPtr,row,collumn);
	sysmmetric (arrayPtr,row,collumn);
} 



void intputTDArray(int *arrayPtr,int row,int collumn)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			scanf("%d",arrayPtr+i*collumn+j);
		}
	}
}
  
 void sysmmetric(int *arrayPtr,int row,int collumn)
 {
 	int i,j,a;
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			if(*(arrayPtr+i*row+j)==*(arrayPtr+j*row+i))
			{
				a++; 
			}
		}
	}
	if(a==row*row)
	{
		printf("对称"); 
	}
	else
	{
		printf("不对称");
	}
 }
