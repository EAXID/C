//WL2002 2031053231 WXD
//2020年11月23日第5题 

#include<stdio.h>
int b(int data);
int main(void)
{
	int m;
	printf("请输入一个十进制的数："); 
	scanf("%d",&m);
	printf("转换后二进制为：");
    b(m);
	return 0;
	
 } 
 
int b(int data) 
{
	int q,r,i,array[20];
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
 } 
  
  
