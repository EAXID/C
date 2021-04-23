//Wl2002 2031053236 ang xin
//solve an equation

#include<stdio.h>
#include<math.h>

int main()
{
	float coefficient_1,coefficient_2,coefficient_3;
	float delta,result,result1,result2;
	scanf("%f%f%f",&coefficient_1,&coefficient_2,&coefficient_3);
	delta=(coefficient_2*coefficient_2)-(4*coefficient_1*coefficient_3);
	
	if(delta==0)
	{
	result=(-coefficient_2+sqrt(delta))/(2*coefficient_1) ;
	printf("result is :%f",result);
	}
	else
	{
		if(delta>0)
		{result1=((-coefficient_2+sqrt(delta))/(2*coefficient_1)) ;
		 printf("result1 is :%f\n",result1);
		 result2=((-coefficient_2-sqrt(delta))/(2*coefficient_1)) ;
		 printf("result2 is :%f",result2);
		}
		else
		{
			printf("no sloution");
		}
	}
    return 0;
}
