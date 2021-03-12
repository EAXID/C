//WL2002 2031053231 WXD
//Down the Number

#include<stdio.h>
int main(void)
{
	int number,q;
	printf("请输入一个数");
	scanf("%d",&number);
	for(q=1;q!=0;)
	{
		q=number%10;
		number=number/10;
		if(q==0)
		{
			break;
		}
		printf("%d\n",q);
		 
	} 
	return 0;
}
