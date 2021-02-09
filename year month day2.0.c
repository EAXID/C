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
			    if((month==1||month==3||month==5||month==7||month==8||month==10)&&day==31)
			    {
			    	month=month+1;
				    day=1;
					printf("This is a leep year\n");
					printf("year is :%d,month is :%d,day is :%d",year,month,day);
				}
				else
			    {
					if((month==1||month==3||month==5||month==7||month==8||month==10)&&day!=31&&day>=1&&day<31)   
					{
						day=day+1;
						printf("This is a leep year\n");
					    printf("year is :%d,month is :%d,day is :%d",year,month,day);   
					}
			        else
			        {
				        if((month==4||month==6||month==9||month==11)&&day==30)
				        {
				        	month=month+1;
				        	day=1;
				        	printf("This is leep year\n");
						    printf("year is : %d,month is :%d,day is :%d",year,month,day);
				        }
					    else
					    {
						    if((month==4||month==6||month==9||month==11)&&day!=30&&day<30&&day>=1)
						    {
						    	day=day+1;
						    	printf("This is leep year\n");
						        printf("year is : %d,month is :%d,day is :%d",year,month,day);
							}
					        else
							{
								if(month==2&&day==29)
					    	    {
					    	    	month=3,day=1;
					    		    printf("This is a leep year\n");
					                printf("year is :%d,month is :%d,day is :%d",year,month,day);
							    }
							    else
							    {
							    	if(month==2&&day!=29&&day<29&&day>=1)
							        {
									    day=day+1;
							    	    printf("This is a leep year\n");
					                    printf("year is :%d,month is :%d,day is :%d",year,month,day);	
									}	
								    else
								    {
								    	if(month==12&&day==31)
								    	{
								    		year=year+1,month=1,day=1;
										}
										else
										{
											if(month==12&&day!=31&&day<31&&day>=1)
											{
												day=day+1;
												printf("This is a leep year\n");
					                            printf("year is :%d,month is :%d,day is :%d",year,month,day);
											}
										}
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
        	if((month==1||month==3||month==5||month==7||month==8||month==10)&&day==31)
			    {
			    	month=month+1;
				    day=1;
					printf("This is a leep year\n");
					printf("year is :%d,month is :%d,day is :%d",year,month,day);
				}
				else
			    {
					if((month==1||month==3||month==5||month==7||month==8||month==10)&&day!=31&&day>=1&&day<31)   
					{
						day=day+1;
						printf("This is a leap year\n");
					    printf("year is :%d,month is :%d,day is :%d",year,month,day);   
					}
			        else
			        {
				        if((month==4||month==6||month==9||month==11)&&day==30)
				        {
				        	month=month+1;
				        	day=1;
				        	printf("This is leap year\n");
						    printf("year is : %d,month is :%d,day is :%d",year,month,day);
				        }
					    else
					    {
						    if((month==4||month==6||month==9||month==11)&&day!=30&&day<30&&day>=1)
						    {
						    	day=day+1;
						    	printf("This is leap year\n");
						        printf("year is : %d,month is :%d,day is :%d",year,month,day);
							}
					        else
							{
								if(month==2&&day==28)
					    	    {
					    	    	month=3,day=1;
					    		    printf("This is a leap year\n");
					                printf("year is :%d,month is :%d,day is :%d",year,month,day);
							    }
							    else
							    {
							    	if(month==2&&day!=28&&day<28&&day>=1)
							        {
									    day=day+1;
							    	    printf("This is a leep year\n");
					                    printf("year is :%d,month is :%d,day is :%d",year,month,day);	
									}	
								    else
								    {
								    	if(month==12&&day==31)
								    	{
								    		year=year+1,month=1,day=1;
								    		if((year%400)==0||((year%4)==0&&(year%100)!=0))
											{
												 printf("This is a leep year\n");
					                             printf("year is :%d,month is :%d,day is :%d",year,month,day);
											}
											else
											{
												printf("This is a leep year\n");
					                            printf("year is :%d,month is :%d,day is :%d",year,month,day);
											}
										}
										else
										{
											if(month==12&&day!=31&&day<31&&day>=1)
											{
												day=day+1;
												printf("This is a leap year\n");
					                            printf("year is :%d,month is :%d,day is :%d",year,month,day);
											}
										}
									}
					            }
                            }
                        }
                    }
                }
		}
    }
	return 0; }
