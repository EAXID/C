//WL2002 2031053231 WXD
// Several students calculate average grades

#include<stdio.h>

int main(void)
{
	int number,sum=0,i,a,b;
	printf("请输入学生人数");
	scanf("%d",&number);
	float score[number],as,max,min;
	printf("请输入本次考满分");
	scanf("%f",&min); 
	printf("请输入%d名学生的成绩",number);
	for(i=0,max=0;i<number;i++)
	{
		scanf("%f",&score[i]);
		sum+=score[i];
		if(max<score[i])
		{
			max=score[i];
			a=i+1;
		}
		if(min>score[i])
		{
			min=score[i];
			b=i+1;
		}
	}
	as=sum/i;
	printf("average score=%f\nmax=%f\nmin=%f\nmax的位置：%d\nmin的位置：%d",as,max,min,a,b);
	return 0;	
}
