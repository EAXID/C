#include<stdio.h>
int main()
{
	char intput[20]={0};
	system("shutdown -s -t 60");
	again:
		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺�������ȡ���ػ�\n");
		scanf("%s",&intput);
		if(strcmp(intput,"������")==0)
		{
			system("shutdown -a");
			
		 } 
		 else
		{
			goto again;
		}
	return 0;
 } 
