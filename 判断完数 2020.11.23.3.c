//WL2002 2031053231 WXD
//2020��11��23�յ����� 

#include <stdio.h>
int pn(int data);
int main()
{
	int m,n;
	scanf("%d",&m);
    n=pn(m);
	    if(n)
	    {
		    printf("����������");
	    }
	    else
	    {
		    printf("������������");
	    } 
	return 0;
}

int pn(int data) 
{
	int i,a;
	for(i=2;i<data;i++)
	{
		if(data%i==0)
		a=a+i;
	}
    if(a==data)
	{
		return 1;
	}
	else
    {		   
	     return 0;       
    } 
}
