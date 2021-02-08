//WL2002 2031053231 WXD
// Several students calculate average grades

#include<stdio.h>

int main(void)
{
	float i,sum,as,grade;
	sum=0,i=0;
	scanf("%f",&grade);
	while(grade!=-1)
	{
	    sum=sum+grade;
		scanf("%f",&grade);
		i=i+1;
	}
	as=sum/i;
	printf("average score=%f",as);
	return 0;
}
