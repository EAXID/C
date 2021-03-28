//WL2002 2031053231 WXD
//2020年11月27日第4题

#include<stdio.h>
#include<math.h>
int decimal(int num);
int main(void)
{
	int x;
	printf("请输入二进制"); 
	scanf("%d",&x);
	decimal(x);
	return 0; 
}

int decimal(int num) 
{
	int i,j;
	j=num;
	for(i=0;num!=0;i++)
	{
		num=num/10;
	}
	int array[i];
	for(i=0;j!=0;i++)
	{
		array[i]=j%10;
		j=j/10;
	}
	j=i;
	int sum=0;
	for(i=0;i<j;i++)
	{
		sum=sum+(array[i]*(pow(2,i)));
	}
	printf("十进制为%d",sum);
}
