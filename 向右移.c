//WL2002 2031053231 WXD
// One to the right

#include<stdio.h>

int main(void)
{
	int number,n,i;
	printf("������Ԫ�ظ���\n");
	scanf("%d",&number);
	int array[number],array2[number];
	printf("������Ԫ��\n"); 
	for(i=0;i<number;i++)
	{
		scanf("%d",&array[i]);
		if(i==(number-1))
		{
			array2[0]=array[number-1];
		}
		else
		{
			array2[i+1]=array[i];
		}
	}
	for(i=0;i<number;i++)
	{
		printf("%4d",array2[i]);
	}
	return 0;
}
