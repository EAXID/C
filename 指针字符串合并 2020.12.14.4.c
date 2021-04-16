//WL2002 2031053231 WXD
//2020.12.14.4
#include<stdio.h>

char *stConcat(char *str1Ptr,char *str2Ptr);

int main()
{
	char str1[100],str2[100];
	printf("请输入第一个字符串");
	gets(str1);
	printf("请输入第二个字符串");
	gets(str2);
	char *str1Ptr,*str2Ptr;
	str1Ptr=str1;
	str2Ptr=str2;
	*stConcat(str1Ptr,str2Ptr);
	printf("合并后%s",str1);
	return 0; 
}

char *stConcat(char *str1Ptr,char *str2Ptr)
{
	while(*str1Ptr!='\0')
	{
		str1Ptr++;
	}
	for(;*str2Ptr!='\0';str1Ptr++,str2Ptr++)
	{
		*str1Ptr=*str2Ptr;
	}
	*str1Ptr='\0';
} 
