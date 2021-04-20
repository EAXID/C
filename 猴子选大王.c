//WL2031053231 WXD
//2020.12.18.2 
#include<stdio.h>

void monkeyKing(int n,int m);

int main()
{ 
	int num,mKing;
  	printf("Input the number of Monkey & max to call:");
  	scanf("%d%d",&num,&mKing);            /* 读入猴子总数和报数最大值 */
  	monkeyKing(num,mKing);
  	return 0;
}
void monkeyKing(int n,int m)
{
	int i,j,t,a[100];                /* 定义数组a存储序号 */
	int *p;                          /* 定义工作指针 */
	for(i=0;i<n;i++)
	{
		a[i]=i+1; 				/* a数组存储序号从1开始(a[0]=1) */
	}              
   	p=a-1;
	t=0;                     /* 初值,p指向头的前一个,报数计数置0 */
   	for(i=0;i<n;)                     /* 退出者用i计数 */
   	{
		p++;
		if(p==a+n)                   /* 若指针超过尾则指向头 */
 			p=a;
		if(*p)                        /* 若未退出(*p非0)则报数 */
		{  
			t++;
   			if(t==m)                   /* 报数到m则*/
     		{  
				j=*p;                   /* j存储序号*/
				*p=0;                   /* *p退出(*p=0) */
				t=0;                    /* 重新报数(t=0) */
				i++;
			}
		}	
   }
   printf("The king is %dth\n",j);   /* 输出序号 */
}

