//Wl2020 2031053231 WXD 
//2020.12.18.1.2

#include<stdio.h>

int strCompare(char *strPtr1, char *strPtr2);		//比较两字符串 

int  strLength(char *charPtr);  					//求字符串长度 

void AscendSortStr(char *strArray[],int num);		//对若干个字符串进行排序

void DscendSortStr(char *strArray[],int num); 

int main()
{
	char str[200][20];
	char *strArray[200];
	int i,num;
	printf("Please enter the number of strings:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Please enter the %d string:",i+1);
		scanf("%s",str[i]);
		strArray[i]=str[i];
	}
	AscendSortStr(strArray,num);
	printf("排序后的结果为：\n");
	printf("升序：\n");
	for(i=0;i<num;i++)
		printf("%d---%s\n",i+1,strArray[i]);
	DscendSortStr(strArray,num);
	printf("降序：\n");
	for(i=0;i<num;i++)
		printf("%d---%s\n",i+1,strArray[i]);
	return 0;
}
void AscendSortStr(char *strArray[],int num)
{
	int i,j;
	char *temp;
	for(i=0;i<num-1;i++)
	{
		for(j=i;j<num;j++)
		{
			if(strCompare(strArray[i],strArray[j])>0)
			{
				temp=strArray[i];
				strArray[i]=strArray[j];
				strArray[j]=temp;
			}
		}
	}
}
void DscendSortStr(char *strArray[],int num)
{
	int i,j;
	char *temp;
	for(i=0;i<num-1;i++)
	{
		for(j=i;j<num;j++)
		{
			if(strCompare(strArray[i],strArray[j])<0)
			{
				temp=strArray[i];
				strArray[i]=strArray[j];
				strArray[j]=temp;
			}
		}
	}
}
int strCompare(char *strPtr1, char *strPtr2)
{
	int i;
	int num1=strLength(strPtr1);
	int num2=strLength(strPtr2);
	if(num1<num2)
	{
		return -1;
	}
	else if(num1>num2)
	{
		return 1;
	}
	else if(num1==num2)
	{
		int sum = 0,i=0;
        for (i=0;i<num1;i++) 
		{
            if (strPtr1[i]>strPtr2[i])
			{
                sum++;
            }
            else if (strPtr1[i]<strPtr2[i])
			{
                sum--;
            }
        }
        if (sum > 0)
            return 1;
        else if (sum < 0) 
			return -1;
        else 
			return 0;
    }
}
int  strLength(char *charPtr)
{
	int length=0;
	while(*charPtr!='\0')
	{
		length++;
		charPtr++;
	}
	return length;
}
