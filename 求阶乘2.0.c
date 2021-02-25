//WL2002 2031053231 WXD
//caicuating factorial

#include<stdio.h>

int main(void)
{
	printf("please enter the number\n");
	int n,i,data;
	scanf("%d",&n);
	for(i=1,data=1;i<=n;i++)
	{
		data=data*i;
	}
	printf("n factorial is : %lld",data);
	return 0;
}
