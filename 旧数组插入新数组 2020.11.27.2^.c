//WL2002 2031053231 WXD
//2020��11��27�յ�2��

#include<stdio.h>
void inser(int array[],int number,int data);
int main(void) 
{
	int x,t;
	printf("���������鳤��");
	scanf("%d",&x);
	int n[x]; 
	printf("����������");
	for(t=0;t<x;t++)
	{
		scanf("%d",&n[t]);
	}
	int y;
	printf("�����������鳤��");
	scanf("%d",&y);
	int m[x+y],r;
	for(t=0;t<x;t++)
	{
		m[t]=n[t];
	}
	printf("������������");
	for(t;t<x+y;t++)
	{
		scanf("%d",&m[t]);
	}
	inser(m,x,y); 
	 
}

void inser(int array[],int number,int data)
{
	int i,j,temp;
	for (i=0;i<number+data-1;i++)
	{
		for (j=0;j<number+data-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}	
		}
	}	

	for(i=0;i<number+data;i++)
	{
		printf("%3d",array[i]);
	}
	printf("\n");
	
}
