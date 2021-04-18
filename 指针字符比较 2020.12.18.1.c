//WL2002 2031053231 WXD
//2020.12.18.1

#include<stdio.h>
int strCompare(char *str1,char *str2);
int main(void)
{
	char sTr1[100],sTr2[100];
	printf("请输入第一个字符串");
	gets(sTr1);
	printf("请输入第二个字符串");
	gets(sTr2);
	char *str1,*str2;
	str1=sTr1;
	str2=sTr2;
	if(strCompare(str1,str2)==0)
	{
		printf("相同");
	}
	else if(strCompare(str1,str2)==1)
	{
		printf("前一个大于后一个");
	} 
	else
	{
		printf("前一个小于后一个"); 
	 } 
	return 0; 
}

int strCompare(char *str1,char *str2)
{
	for(;*str1!='\0'||str2!='\0';str1++,str2++)
	{
		if(*str1==*str2)
		{
			;
		}
		else
		{
			break;
		}
	}
	if(*str1==*str2)
	{
		return 0;
	}
	else if(*str1>*str2)
	{
		return 1;
	} 
	else
	{
		return -1;
	}
}
