  //WL2002 2031053231 WXD
//The hunderd mark system is graded

#include<stdio.h>

int main(void)
{
	int performance[6]={100,95,85,75,65,55};
	int i,data;
	for(i=0;i<6;i++)
	{
		data=performance[i]/10;
	        switch(data)
	        {
		    case 10 : printf("student %d is rated 5\n",i+1);break;
		    case 9 : printf("student %d is rated 5\n",i+1);break;
		    case 8 : printf("student %d is rated 4\n",i+1);break;
		    case 7 : printf("student %d is rated 3\n",i+1);break;
		    case 6 : printf("student %d is rated 2\n",i+1);break;
		    default : printf("student %d is rated 1",i+1);
	        }
	}
	
	
	return 0; 
}
