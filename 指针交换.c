//WL2002 2031053231 WXD
//2020.12.11.2

#include<stdio.h>
void swap(int *dataPtr1,int *dataPtr2);
int main(void)
{
	int a,b;
	printf("�������һ������a\n");
	scanf("%d",&a); 
	printf("������ڶ�������b\n");
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
