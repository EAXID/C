//wl2002 2031053231 WXD
//number transposition

#include<stdio.h>
int v(int number,int score[]);
int main(void)
{
	int m;
	printf("请输入数组长度");
	scanf("%d",&m);
	int n[m];
	printf("请输入数组");
	v(m,n[m]);
	return 0;
 } 
 
int v(int number,int score[]) 
{
	int i,n[number];
	for(i=0;i<number;i++) 
	{
		scanf("%d",&n[i]);
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",n[i]);
	}
	return 0;
 } 
