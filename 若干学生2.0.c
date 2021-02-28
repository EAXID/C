//WL2002 2031053231 WXD
// Several students calculate average grades

#include<stdio.h>

int main(void)
{
	float i,sum,max,min,grade,as;
	
	for(sum=0,max=0,i=0,min=100000;grade!=-1;i++)
	{
		scanf("%f",&grade);
		if(grade!=-1)
		{
			sum=sum+grade;
		if(grade>max)
		{
			max=grade;
		}
		if(grade<min)
		{
			min=grade;
		}
		}
		else
		{
			break;
		}
		
	}
	as=sum/i;
	printf("average score=%f\nmax=%f\nmin=%f\n",as,max,min);
	return 0;
}
