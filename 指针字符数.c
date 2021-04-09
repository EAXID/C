//WL2002 2031053231 WXD
//2020.12.11.4

#include<stdio.h>
int strLength(char *charPrt);
int main(void)
{
    char array[1000];
    printf("请输入字符串\n");
    gets(array);
    char *charPrt;
    charPrt=array;
    printf("长度为%d",strLength(charPrt));
    return 0;
}

int strLength(char *charPrt)
{
    int sum=0;
	while(*charPrt!='\0')
	{
		sum++;
		charPrt++;
    }	
    return sum;
} 
