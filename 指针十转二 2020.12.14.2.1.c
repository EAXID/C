//WL2002 2031053231 WXD 
//2020.12.14.2.1

#include<stdio.h>
int *binary(int data);
int main(void)
{
	int m;
	printf("������һ��ʮ���Ƶ�����"); 
	scanf("%d",&m);
	printf("ת���������Ϊ��");
    binary(m);
	return 0;
	
 } 
 
int *binary(int data) 
{
	int q,r,i,array[20];
	int *binary;
	binary=array;
	for(q=1,i=0;q!=0;) 
	{
		r=data%2;
		q=(data-r)/2;
		data=q;
		i++,binary++;
		array[i]=r;
	}
    for( ;i>0;i--,binary--)
    {
        printf("%d",*binary);
		
	}	
 } 
