//WL2002 2031053231 WXD
//Year Month Day

#include<stdio.h>

int main(void)
{
	int year,month,day;
	printf("Please enter the year,month and day\n");
	scanf("%d%d%d",&year,&month,&day);
	if(year>=1900)
	{
		if((year%400)==0||((year%4)==0&&(year%100)!=0))
		{
			if(month<=12&&month>=1)
			{
			    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			    {
			    	
				    if(day<=31&&day>0)
				    {
					    printf("This is a leep year\n");
					    printf("year is :%d,month is :%d,day is :%d",year,month,day);
				    }
				    else
				    {
					    printf("number of days input error");
				    }
			    }
			    else
			    {
				    if(month==4||month==6||month==9||month==11)
				    {
					    if(day<=30&&day>0)
					    {
						    printf("This is leep year\n");
						    printf("year is : %d,month is :%d,day is :%d",year,month,day);
					    }
					    else
					    {
						    printf("number of days input error");
					    }
				    }
				    else
				    {
					    if(month==2)
					    {
					    	if(day<=29&&day>=1)
					    	{
					    		printf("This is a leep year\n");
					            printf("year is :%d,month is :%d,day is :%d",year,month,day);
							}
							else
							{
								printf("number of days input error");
							}
					    }
					
				    }
			    }
				
			}
			else
			{
				if(month<=12&&month>=1)
			{
			    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			    {
			    	
				    if(day<=31&&day>0)
				    {
					    printf("This is a leap year\n");
					    printf("year is :%d,month is :%d,day is :%d",year,month,day);
				    }
				    else
				    {
					    printf("number of days input error");
				    }
			    }
			    else
			    {
				    if(month==4||month==6||month==9||month==11)
				    {
					    if(day<=30&&day>0)
					    {
						    printf("This is leap year\n");
						    printf("year is : %d,month is :%d,day is :%d",year,month,day);
					    }
					    else
					    {
						    printf("number of days input error");
					    }
				    }
				    else
				    {
					    if(month==2)
					    {
					    	if(day<=28&&day>=1)
					    	{
					    		printf("This is a leap year\n");
					            printf("year is :%d,month is :%d,day is :%d",year,month,day);
							}
							else
							{
								printf("number of days input error");
							}
					    }
					
				    }
			    }
				
			}
			}
		}
	 } 
	 else
	 {
	 	printf("year input error");
	 }
	return 0; 
}
