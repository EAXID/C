//WL2002 2031053231 WXD
//2021年3月5日第2题 

#include<stdio.h>
#include<math.h>
void prime(int a);//判断素数 
void yinzi(int x);//输出因子 
void pn(int data);//判断完数 
void sXh(int x);//判断水仙花数
int main(void)
{
	printf("请输入数字");
	int m,a,b;
	scanf("%d",&m);
	
	do
	{
		printf("请选择功能\n");
	    printf("1：判断素数\n"); 
	    printf("2：输出因子\n");
	    printf("3：判断完数\n");
	    printf("4：判断水仙花数\n");
    	printf("其他任意键：退出\n");
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
		printf("输入5继续执行其他功能，输入其他退出\n");
	    scanf("%d",&b);
	} while(5==b&&(a==1||a==2||a==3||a==4));
	system("cls");
	printf("谢谢使用"); 
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
		printf("该数是素数\n") ;
	}
	else
	{
		printf("该数不是素数\n");
	}
	
 }
 
 void yinzi(int x)//输出因子 
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
  
void pn(int data)//判断完数 
{
	int i,a;
	for(i=2;i<data;i++)
	{
		if(data%i==0)
		a=a+i;
	}
    if(a==data)
	{
		printf("是完数\n");
	}
	else
    {		   
	    printf("不是完数\n");       
    } 
}

void sXh(int x)//判断水仙花数
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
		printf("是水仙花数\n"); 
	}
	else
	{
		printf("不是水仙花数\n"); 
	}
} 
