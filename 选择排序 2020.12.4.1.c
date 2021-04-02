//WL2002 2031053231 WXD
//2020.12.4.1

#include<stdio.h> 
int selectSortAO(int array[],int number);
int selectSortDO(int array[],int number);
int main(void)
{
	int num;
	printf("请输入数据个数"); 
	scanf("%d",&num);
	printf("请输入数据"); 
	int a[num],t;
	for(t=0;t<num;t++)
	{
		scanf("%d",&a[t]);
	}
	
	selectSortAO(a,num);
	selectSortDO(a,num);
	return 0; 
}

int selectSortAO(int array[],int number)
{
	int i,j,min,tmp;
	for(i=0;i<number;i++)
	{
		min=i;
		for(j=i;j<number;j++)
		{
			if(array[min]>array[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			tmp=array[min];
			array[min]=array[i];
			array[i]=tmp;
		}
		printf("%d",array[i]);
	}
	printf("\n");
	return 0;
}

int selectSortDO(int array[],int number)
{
	int i,j,min,tmp;
	for(i=0;i<number;i++)
	{
		min=i;
		for(j=i;j<number;j++)
		{
			if(array[min]<array[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			tmp=array[min];
			array[min]=array[i];
			array[i]=tmp;
		}
		printf("%d",array[i]);
	}
	printf("\n");
	return 0;
}
