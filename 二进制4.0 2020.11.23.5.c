//WL2002 2031053231 WXD
//2020��11��23�յ�5�� 

#include<stdio.h>
int b(int data);
int main(void)
{
	int m;
	printf("������һ��ʮ���Ƶ�����"); 
	scanf("%d",&m);
	printf("ת���������Ϊ��");
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
  
  
