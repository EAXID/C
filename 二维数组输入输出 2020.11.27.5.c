//WL2002 2031053231 WXD
//2020��11��27�յ�5��

#include<stdio.h>
void intputDArray(int a,int b,int array[a][b]);
void outputDArray(int a,int b,int array[a][b]);
int main(void)
{
	int x,y;
	printf("���������鳤��");
	scanf("%d%d",&x,&y);
	int n[x][y];
    intputDArray(x,y,n);
	outputDArray(x,y,n);
    return 0;
	 
} 

void intputDArray(int a,int b,int array[a][b])
{
	int i,j;
	printf("����\n");
	for(i=0;i<a;i++)
	{ 
		for(j=0;j<b;j++)
		{
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
}

void outputDArray(int a,int b,int array[a][b])
{
	int i,j;
	printf("���\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
}
