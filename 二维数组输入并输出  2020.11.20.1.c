//Wl2002 2031053231 WXD
//Two dimensional array input and output

#include<stdio.h>
int main(void)

{
	int row,collumn;
	printf("����������");
	scanf("%d",&row);
	printf("����������");
	scanf("%d",&collumn);
	int array2[row][collumn];
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			scanf("%d",&array2[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			printf("%4d",array2[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
