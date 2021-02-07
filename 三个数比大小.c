//WL2002 2031053231 WXD
//compare the sizeofthere Numbers

#include<stdio.h>

int main(void)
{
	float data1,data2,data3,data4,max,min;
	scanf ("%f%f%f",&data1,&data2,&data3);
	
	if (data1>data2&&data1>data3)
	{
	max=data1;
	if (data2>data3)
	    { 
		min=data3;
	    }
	else
	    {
	    min=data2;
	    }
		
	}
	else
	{
		if(data2>data3)
		{
			max=data2;
			
			if(data1>data3)
			{
				min=data3;
			}
			else
			{
				min=data1;
			}
		}
		else
		{
			max=data3;
			if(data1>data2)
			{
				min=data2;
			}
			else
			{
				min=data1;
			}
		}
	}
	data4=max;
	max=min;
	min=data4;
	printf("min is :%f",min);
	printf("max is :%f",max);
	
	return 0; 
}
