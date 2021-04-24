#include<stdio.h>
int main()
{
	char intput[20]={0};
	system("shutdown -s -t 60");
	again:
		printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪就取消关机\n");
		scanf("%s",&intput);
		if(strcmp(intput,"我是猪")==0)
		{
			system("shutdown -a");
			
		 } 
		 else
		{
			goto again;
		}
	return 0;
 } 
