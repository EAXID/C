//WL2002 2031053231 WXD
//2020.12.11.2

#include<stdio.h>
void swap(int *dataPtr1,int *dataPtr2);
int main(void)
{
	int a,b;
	printf("请输入第一个数字a\n");
	scanf("%d",&a); 
	printf("请输入第二个数字b\n");
	scanf("%d",&b); 
	swap(&a,&b);
	printf("a=%d\nb=%d",a,b);
	return 0;
} 

void swap(int *dataPtr1,int *dataPtr2)
{
	int c;
	c=*dataPtr1;
	*dataPtr1=*dataPtr2;
	*dataPtr2=c;
}
