//WL2031053231 WXD
//2020.12.18.2 
#include<stdio.h>

void monkeyKing(int n,int m);

int main()
{ 
	int num,mKing;
  	printf("Input the number of Monkey & max to call:");
  	scanf("%d%d",&num,&mKing);            /* ������������ͱ������ֵ */
  	monkeyKing(num,mKing);
  	return 0;
}
void monkeyKing(int n,int m)
{
	int i,j,t,a[100];                /* ��������a�洢��� */
	int *p;                          /* ���幤��ָ�� */
	for(i=0;i<n;i++)
	{
		a[i]=i+1; 				/* a����洢��Ŵ�1��ʼ(a[0]=1) */
	}              
   	p=a-1;
	t=0;                     /* ��ֵ,pָ��ͷ��ǰһ��,����������0 */
   	for(i=0;i<n;)                     /* �˳�����i���� */
   	{
		p++;
		if(p==a+n)                   /* ��ָ�볬��β��ָ��ͷ */
 			p=a;
		if(*p)                        /* ��δ�˳�(*p��0)���� */
		{  
			t++;
   			if(t==m)                   /* ������m��*/
     		{  
				j=*p;                   /* j�洢���*/
				*p=0;                   /* *p�˳�(*p=0) */
				t=0;                    /* ���±���(t=0) */
				i++;
			}
		}	
   }
   printf("The king is %dth\n",j);   /* ������ */
}

