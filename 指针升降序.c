//WL2002 2031053231 WXD
//2020.12.11.3

#include<stdio.h>
void AscendselectSort(int num,int *arrayPrt);
void DscendselectSort(int num,int *arrayPrt);
int intputArray(int num,int *arrayPrt);
int main(void)

{
	int number;
	printf("请输入数组长度");
	scanf("%d",&number);
	printf("请输入数据");
	int array2[number];
	int *arrayPrt;
	arrayPrt=array2;
	intputArray(number,arrayPrt);
	AscendselectSort(number,arrayPrt);
	DscendselectSort(number,arrayPrt);
	return 0;
}


int intputArray(int num,int *arrayPrt)
{
	int *p=arrayPrt;
	for(arrayPrt=p;arrayPrt<p+num;arrayPrt++)
	{
		scanf("%d",arrayPrt);
	}
	return 0;
}

void swap(int *dataPtr1,int *dataPtr2)
{
	int c;
	c=*dataPtr1;
	*dataPtr1=*dataPtr2;
	*dataPtr2=c;
}

void AscendselectSort(int num,int *arrayPrt)
{
	int *p=arrayPrt;
	int *arrayPrt2;
	for(;arrayPrt<p+num-1;arrayPrt++)
	{
		for(arrayPrt2=arrayPrt+1;arrayPrt2<p+num;arrayPrt2++)
		{
			if(*arrayPrt>*arrayPrt2)
		    {
			    swap(arrayPrt,arrayPrt2);
		    }
		}
	}
	printf("升序\n");
	for(arrayPrt=p;arrayPrt<p+num;arrayPrt++)
	{
		printf("%5d",*arrayPrt);
	}
	printf("\n");
}

void DscendselectSort(int num,int *arrayPrt)
{
	int *p=arrayPrt;
	int *arrayPrt2;
	for(;arrayPrt<p+num-1;arrayPrt++)
	{
		for(arrayPrt2=arrayPrt+1;arrayPrt2<p+num;arrayPrt2++)
		{
			if(*arrayPrt<*arrayPrt2)
		    {
			    swap(arrayPrt,arrayPrt2);
		    }
		}
	}
	printf("降序\n");
	for(arrayPrt=p;arrayPrt<p+num;arrayPrt++)
	{
		printf("%5d",*arrayPrt);
	}
	printf("\n");
}
