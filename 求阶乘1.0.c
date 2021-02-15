//WL2002 2031053231 WXD
//caicuating factorial

#include<stdio.h>

int main(void)
{
	printf("please enter the number\n");
	int n,i,data;
	scanf("%d",&n);
	i=1,data=1;
	while(i<=n)
	{
		data=i*data;
		i++;
	}
	printf("n factorial is : %d",data);
	return 0;
}
