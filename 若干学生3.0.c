//WL2002 2031053231 WXD
// Several students calculate average grades

#include<stdio.h>

int main(void)
{
	int number,sum=0,i,a,b;
	printf("������ѧ������");
	scanf("%d",&number);
	float score[number],as,max,min;
	printf("�����뱾�ο�����");
	scanf("%f",&min); 
	printf("������%d��ѧ���ĳɼ�",number);
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
	printf("average score=%f\nmax=%f\nmin=%f\nmax��λ�ã�%d\nmin��λ�ã�%d",as,max,min,a,b);
	return 0;	
}
