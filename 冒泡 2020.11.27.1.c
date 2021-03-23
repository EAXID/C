//WL2002 2031053231 WXD
//2020年11月27日第1题

#include<stdio.h>
int bubbleAscend(int array[],int num);
int bubbleDscend(int array[],int num);
int main(void) 
{
	int x,t;
	printf("请输入数组长度");
	scanf("%d",&x);
	int n[x];
	printf("请输入数组");
	for(t=0;t<x;t++)
	{
		scanf("%d",&n[t]);
	}
	bubbleAscend(n,x);
	bubbleDscend(n,x);
	return 0;
}

int bubbleAscend(int array[],int num)
{
	int i,j,temp;
	for (i=0;i<num-1;i++)
	{
		for (j=0;j<num-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}	
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%3d",array[i]);
	}
	printf("\n");
	return 0;
}

int bubbleDscend(int array[],int num)
{
	int i,j,temp;
	for (i=0;i<num-1;i++)
	{
		for (j=0;j<num-1-i;j++)
		{
			if(array[j]<array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}	
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%3d",array[i]);
	}
	return 0;
}
