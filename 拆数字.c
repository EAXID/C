//WL2002 2031053231 WXD
//Number of decomposition

#include<stdio.h>
int main(void)
{
	int n,data,a,b,i,c,sum;
	int array[i];
	printf("请输入该数字有几位");
	scanf("%d",&n); 
	for(a=1,i=1;i<n;i++)
	{
		a=a*10;
	}
	printf("请输入数字"); 
	scanf("%d",&data);
	c=a;
	for(i=0;i<n;i++,a=a/10)
	{
		array[i]=data/a;
		data=data-array[i]*a;
	}
	
	for(sum=0,c=10*c;i>=0;i--)
	{
		sum=sum+array[i]*c;
		c=c/10;
	}
	printf("%d",sum);
	return 0;
 } 
