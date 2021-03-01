//WL2002 2031033231 WXD
//The hunderd mark system is graded

#include<stdio.h>

int main(void)
{
	int performance,data;
	printf("please enter your score £º");
	scanf("%d",&performance);
	if(performance>=0&&performance<=100)
	{
			data=performance/10;
	        switch(data)
	        {
		    case 10 : printf("Your rating is A\n");break;
		    case 9 : printf("Your rating is A\n");break;
		    case 8 : printf("Your rating is B\n");break;
		    case 7 : printf("Your rating is C\n");break;
		    case 6 : printf("Your rating is D\n");break;
		    default : printf("Your rating is F\n");
	        }
	}
	else
	{
		printf("Incorrect input score");
	}
	return 0; 
}
