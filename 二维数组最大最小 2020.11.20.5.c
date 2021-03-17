//WL2002 2031053231 WXD
//11月20日第五题
 
#include "stdio.h"
void main( )
{ 
    int a[3][3]={4,4,34,37,3,12,5,6,5},i,j,max,min;
    max=a[0][0];
    min=a[0][2];
    for( i=0; i<3; i++)
    {
    	for( j=0; j<3; j++)
      { if ( max < a[i][j] )   max = a[i][j];
        if ( min > a[i][j] )   min = a[i][j];
      }
	}  
    printf("The max is: %d\n", max);
    printf("The min is: %d\n", min);
    return 0; 
}
