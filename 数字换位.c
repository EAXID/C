//wl2002 2031053231 WXD
//number transposition

#include<stdio.h>
int main(void)
{
	int number,i,data;
	printf("���������鳤��");
	scanf("%d",&number);
	int score[number];
	printf("����������");
	for(i=0;i<number;i++) 
	{
		scanf("%d",&data);
		score[i]=data;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",score[i]);
	}
	return 0;
 } 
