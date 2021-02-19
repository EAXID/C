//WL2002 2031053231 WXD
//determine the number of daffodils

#include <stdio.h>
int main()
{
	int a,b,c,data;
	
	scanf("%d",&data);
		a=data/100;
	    b=((data/10)%10);
	    c=data%10;
	    if(data==a*a*a+b*b*b+c*c*c)
	    {
		    printf("It is the number of daffodils");
	    }
	    else
	    {
		    printf("It not the number of daffodils");
	    } 
	return 0;
}
