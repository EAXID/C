// WL2020 2031053231 WXD
// triangle

#include<stdio.h>
#include<math.h>
 
int main(void)
{
	float edge1,edge2,edge3;
	float area,perinerter;
	scanf("%f%f%f",&edge1,&edge2,&edge3);
	
	if (edge1+edge2>edge3&&edge3+edge2>edge1&&edge1+edge3>edge2)
	{
		perinerter=edge1+edge2+edge3;
		printf("perinerter is : %f\n",perinerter);
		area=sqrt((perinerter/2)*((perinerter/2)-edge1)*((perinerter/2)-edge2)*((perinerter/2)-edge3));
		printf("area is : %f\n",area);
		if(edge1==edge2&&edge2==edge3)
		{
			printf("This is an equilateral tringle");
		}
		else
		{
			if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&(edge1*edge1!=edge2*edge2+edge3*edge3)&&(edge2*edge2!=edge1*edge1+edge3*edge3)&&(edge3*edge3!=edge2*edge2+edge1*edge1))
			{
				printf("This is an isosceles tringle");
			}
			else
			{
				if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&((edge1*edge1==edge2*edge2+edge3*edge3)||(edge2*edge2==edge1*edge1+edge3*edge3)||(edge3*edge3==edge2*edge2+edge1*edge1)))
				{
					printf("This is an isosceles right tringle");
				}
				else
				{
					if(((edge1!=edge2)&&(edge2!=edge3))&&((edge1*edge1!=edge2*edge2+edge3*edge3)||(edge2*edge2!=edge1*edge1+edge3*edge3)||(edge3*edge3!=edge2*edge2+edge1*edge1)))
					{
						printf("This is an right tringle");
					}
					else
					{
						printf("This is an isosceles tringle");
				    }
				}
			}
		}
    }
	else
	{
	      puts("Tist is not a triangle");
	}
	return 0;
 }  
