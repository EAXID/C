//WL2002 2031053231 WXD 
//2020.12.14.2.1

#include<stdio.h>
#include<math.h>
int *binary(int data);
int decimal(int *binPrt);
int main(void)
{
	int m;
	printf("������һ��ʮ���Ƶ�����"); 
	scanf("%d",&m);
	printf("ת���������Ϊ��");
    binary(m);
	
 } 
 
int i,array[20];
int *binary(int data) 
{
	int *binary;
	int q,r,j;
	binary=array;
	for(q=1,i=0;q!=0;) 
	{
		r=data%2;
		q=(data-r)/2;
		data=q;
		i++,binary++;
		array[i]=r;
	}
	int *p;
	p=binary;
	j=i;
    for( ;j>0;j--,binary--)
    {
        printf("%d",*binary);
	}	
	printf("\n"); 
	decimal(p);
 } 
 
 int decimal(int *binPrt)
 {
    int j; 
	j=i;
	
	int sum=0;
	for(i=i-1;i>0;i--,binPrt++)
	{
		sum=sum+((*binPrt)*(pow(2,i)));
	}
	printf("��ת����ʮ����Ϊ��%d",sum);
 }
