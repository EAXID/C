//Wl2002 2031053231 WXD
//Square matrix data conversion 

#include<stdio.h>
int main(void)

{
	int row,collumn;
	printf("请输入列行数");
	scanf("%d",&collumn);
	row=collumn;
	int array2[row][collumn],a2[collumn][row];
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			scanf("%d",&array2[i][j]);
			a2[j][i]=array2[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<collumn;j++)
		{
			printf("%4d",a2[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
