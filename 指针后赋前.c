//WL2002 2031053231 WXD
//2020.12.11.5

#include<stdio.h>
void strCopy(char *charPrt1,char *charPrt2);
int main(void)
{
	char array1[1000],array2[1000];
	printf("请输入前一个字符串");
	gets(array1);
	printf("请输入后一个字符串");
	gets(array2); 
	char *charPrt1,*charPrt2;
	charPrt1=array1;
	charPrt2=array2;
	strCopy(charPrt1,charPrt2);
	return 0;
} 

void strCopy(char *charPrt1,char *charPrt2)
{
	char *p=charPrt1;
	for(;*charPrt2!='\0';charPrt1++,charPrt2++)
	{
		*charPrt1=*charPrt2;
	}
	for(charPrt1=p;*charPrt1!='\0';charPrt1++)
	{
		printf("%c",*charPrt1);
	}
}
