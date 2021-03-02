//WL2002 2031053231 WXD
//binary system

#include<stdio.h>

int main(void)
{
	int data,q,r,i,array[20];
	scanf("%d",&data);
	
	for(q=1,i=0;q!=0;i++) 
	{
		r=data%2;
		q=(data-r)/2;
		data=q;
		array[i]=r;
	}
    for( ;i>0;i--)
    {
    	printf("%d",array[i-1]);
	}
	return 0;
	
 } 
