//WL2002 2031053231 WXD 
//2020��11��27�յ�����

#include<stdio.h>
int maxArray(int num,int array[]);
int minArray(int num,int array[]); 
int main(void) 
{
	int x;
	printf("���������鳤��");
	scanf("%d",&x);
	int n[x],i;
	printf("����������");
	for(i=0;i<x;i++)
	{
		scanf("%d",&n[i]);
	}
	maxArray(x,n);
	minArray(x,n);
}

int maxArray(int num,int array[])
{
	int j,data;
	for(j=0,data=array[0];j<num;j++)
	{
		if(data<=array[j])
		{
			data=array[j];
		}
	}
	printf("���ֵΪ%d\n",data);
	return 0;
}
int minArray(int num,int array[])
{
	int j,data;
	for(j=0,data=array[0];j<num;j++)
	{
		if(data>=array[j])
		{
			data=array[j];
		}
	}
	printf("��СֵΪ%d\n",data);
	return 0;
}
