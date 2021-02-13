// WL2020 2031053231 WXD
// triangle

#include<stdio.h>
#include<math.h>
 
int main(void)
{
	float edge1,edge2,edge3;
	float area,perinerter;
	int data;
	scanf("%f%f%f",&edge1,&edge2,&edge3);
	
	if (edge1+edge2>edge3&&edge3+edge2>edge1&&edge1+edge3>edge2)
	{
		perinerter=edge1+edge2+edge3;
		printf("perinerter is : %f",perinerter);
		area=sqrt((perinerter/2)*((perinerter/2)-edge1)*((perinerter/2)-edge2)*((perinerter/2)-edge3));
		printf("area is : %f",area);
		if(edge1==edge2&&edge2==edge3)
		{
			data=1;
		}
		else
		{
			if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&(edge1*edge1!=edge2*edge2+edge3*edge3)&&(edge2*edge2!=edge1*edge1+edge3*edge3)&&(edge3*edge3!=edge2*edge2+edge1*edge1))
			{
				data=2;
			}
			else
			{
				if((((edge1==edge2)&&edge2!=edge3)||((edge3==edge2)&&edge2!=edge1))&&((edge1*edge1!=edge2*edge2+edge3*edge3)||(edge2*edge2!=edge1*edge1+edge3*edge3)||(edge3*edge3!=edge2*edge2+edge1*edge1)))
				{
					data=3;
				}
				else
				{
					if(((edge1!=edge2)&&(edge2!=edge3))&&((edge1*edge1!=edge2*edge2+edge3*edge3)||(edge2*edge2!=edge1*edge1+edge3*edge3)||(edge3*edge3!=edge2*edge2+edge1*edge1)))
					{
						data=4;
					}
					else
					{
						
				    }
				}
			}
		}
		switch(data)
		{
			case 1 : printf("This is an equilateral tringle");break;
			case 2 : printf("This is an isosceles tringle");break;
			case 3 : printf("This is an isosceles right tringle");break;
			case 4 : printf("This is an right tringle");break;
			dafault : printf("This is an isosceles tringle");
		}
    }
	else
	{
	      puts("Tist is not a triangle");
	}
	return 0;
 } 
