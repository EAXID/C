//WL2002 2031053231 WXD
//2021��3��5�յ�2�� 

#include<stdio.h>
#include<math.h>
void prime(int a);//�ж����� 
void yinzi(int x);//������� 
void pn(int data);//�ж����� 
void sXh(int x);//�ж�ˮ�ɻ���
int main(void)
{
	printf("����������");
	int m,a,b;
	scanf("%d",&m);
	
	do
	{
		printf("��ѡ����\n");
	    printf("1���ж�����\n"); 
	    printf("2���������\n");
	    printf("3���ж�����\n");
	    printf("4���ж�ˮ�ɻ���\n");
    	printf("������������˳�\n");
	    scanf("%d",&a);
		switch(a) 
	    {
		    case 1 :prime(m);break;
		    case 2 :yinzi(m);break;
		    case 3 :pn(m);break;
		    case 4 :sXh(m);break;
		    default : break; 
	    }
	    if(a!=1||a!=2||a!=3||a!=4)
	    {
	    	break;
		}
		printf("����5����ִ���������ܣ����������˳�\n");
	    scanf("%d",&b);
	} while(5==b&&(a==1||a==2||a==3||a==4));
	system("cls");
	printf("ллʹ��"); 
    return 0;
}
	


void prime(int x)
{
	int k;
	for(k=2;k<x;k++)
	{
		if(x%k==0)
		{
			break;
		}
	}
	if(x==k)
	{
		printf("����������\n") ;
	}
	else
	{
		printf("������������\n");
	}
	
 }
 
 void yinzi(int x)//������� 
 {
 	int a[x],i,j;
 	for(i=1,j=0;i<=x;i++)
 	{
 		if(x%i==0)
 		{
 			a[j]=i;
 			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%4d",a[i]);
	}
  } 
  
void pn(int data)//�ж����� 
{
	int i,a;
	for(i=2;i<data;i++)
	{
		if(data%i==0)
		a=a+i;
	}
    if(a==data)
	{
		printf("������\n");
	}
	else
    {		   
	    printf("��������\n");       
    } 
}

void sXh(int x)//�ж�ˮ�ɻ���
{
	int i,j,sum=0;
	int b=x;
	int a[x];
	for(j=0;x!=0;j++)
	{
		i=x%10;
		a[j]=i;
		x/=10;
	}
	for(i=0;i<j;i++)
	{
		sum+=pow(a[i],j);
	}
	if(b==sum)
	{
		printf("��ˮ�ɻ���\n"); 
	}
	else
	{
		printf("����ˮ�ɻ���\n"); 
	}
} 
