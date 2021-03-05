// WL2020 2031053231 WXD
// triangle

#include<stdio.h>
#include<math.h>
float s(float edge1,float edge2,float edge3);
float perintter(float edge1,float edge2,float edge3);
float type(float edge1,float edge2,float edge3);
float area(float edge1,float edge2,float edge3);
 
int main(void)
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	s(a,b,c);
	perintter(a,b,c);
	area(a,b,c);
	type(a,b,c);
	return 0;
}
	
	
float s(float edge1,float edge2,float edge3)
{
	if (edge1+edge2>edge3&&edge3+edge2>edge1&&edge1+edge3>edge2)
	{
		printf("这是三角形\n");
		return 1;
	}
	else 
	{
		printf("这不是三角形");
		return 0;
	}
}

float perinerter;
float perintter(float edge1,float edge2,float edge3)
{
	
	perinerter=edge1+edge2+edge3;
	printf("perinerter is : %f\n",perinerter);
}
		
float area(float edge1,float edge2,float edge3)
{
	float area;
	perinerter=edge1+edge2+edge3;
	area=sqrt((perinerter/2)*((perinerter/2)-edge1)*((perinerter/2)-edge2)*((perinerter/2)-edge3));
	printf("area is : %f\n",area);
}
		
float type(float edge1,float edge2,float edge3)
{
		if(edge1==edge2&&edge2==edge3)
		{
			printf("This is an equilateral tringle\n");
		}
		else
		{
			if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&(edge1*edge1!=edge2*edge2+edge3*edge3)&&(edge2*edge2!=edge1*edge1+edge3*edge3)&&(edge3*edge3!=edge2*edge2+edge1*edge1))
			{
				printf("This is an isosceles tringle\n");
			}
			else
			{
				if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&((edge1*edge1==edge2*edge2+edge3*edge3)||(edge2*edge2==edge1*edge1+edge3*edge3)||(edge3*edge3==edge2*edge2+edge1*edge1)))
				{
					printf("This is an isosceles right tringle\n");
				}
				else
				{
					if(((edge1!=edge2)&&(edge2!=edge3))&&((edge1*edge1!=edge2*edge2+edge3*edge3)||(edge2*edge2!=edge1*edge1+edge3*edge3)||(edge3*edge3!=edge2*edge2+edge1*edge1)))
					{
						printf("This is an right tringle\n");
					}
					else
					{
						printf("This is an isosceles tringle\n");
				    }
				}
			}
		}
    }

	
	
