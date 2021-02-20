//WL2002 2031053231 WXD
//For bimary

#include<stdio.h>
#include<math.h>

int main(void)
{
	int data,q,r,a,c,e;
	scanf("%d",&data);
	a=0,q=1,e=1,c=0;
	while(q!=0)
	{
		r=data%2;
		q=(data-r)/2;
		data=q;
		a=r*e;
		e=10*e;
		c=a+c;
	}
	
	printf("Its binary is : %d",c);
	return 0;
	
}
