//WL2002 2031053231 WXD
//Get nine with nine

#include <stdio.h> 
int main( )
{
    int  i, j;   		     /*i:行计数器 j:列计数器*/
    for(i=1;i<=9;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		printf("%4d",j*i);
		}
		printf("\n");
	}
     return 0;    
        }   

