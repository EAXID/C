//WL2002 2031053231 WXD
//Year Month Day

#include<stdio.h>

 struct Date 
	{
		int year;
		int month;
		int day;
	};
struct Date strdate(int year,int month,int day);
void outputDate(struct Date d1);
struct Date * addDate(struct Date d1);
int main(void)
{
	struct Date Date1; 
	int year,month,day;
	printf("Please enter the year,month and day\n");
    scanf("%d%d%d",&year,&month,&day);
    Date1=strdate(year,month,day);
    addDate(Date1);
}

struct Date strdate(int year,int month,int day)
{
	struct Date Date2;
	while(1)
	{
	    if(year>=1900)
	    {
		    if((year%400)==0||((year%4)==0&&(year%100)!=0))
		    {
		    	printf("这是闰年\n");
		    	break;
			}
			else
			{
				printf("这是平年\n");
				break;
			}
	    }
	    else
	    {
	    	printf("年份输入错误请重新输入"); 
			scanf("%d",&year); 
		}
	}
	while(1)
	{
		if(month<=12&&month>=1)
		{
			break;
		}
		else
		{
			printf("月份输入错误请重新输入");
			scanf("%d",&month); 
		}
	}
	while(1)
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10)
		{
			if(day>=1&&day<=31)
			{
				break;
			}
			else
			{
				printf("日子输入错误请重新输入");
				scanf("%d",day); 
			}
		}
		if(month==4||month==6||month==9||month==11)
		{
			if(day>=1&&day<=30)
			{
				break;
			}
			else
			{
				printf("日子输入错误请重新输入");
				scanf("%d",day); 
			}
		}
		if(month==2)
		{
			if((year%400)==0||((year%4)==0&&(year%100)!=0))
			{
				if(day>=1&&day<=29)
			    {
				    break;
			    }
			    else
			    {
				    printf("日子输入错误请重新输入");
				    scanf("%d",day); 
			    }
			}
			else
			{
				if(day>=1&&day<=28)
			    {
				    break;
			    }
			    else
			    {
				    printf("日子输入错误请重新输入");
				    scanf("%d",day); 
			    }
			}
		}
		Date2.day=day;
		Date2.month=month;
		Date2.year=year;
		return Date2;		    
	}
}
struct Date *addDate(struct Date d1)
{
	while(1)
	{
		if((d1.month==1||d1.month==3||d1.month==5||d1.month==7||d1.month==8||d1.month==10)&&d1.day==31)
		{
			d1.month+=1;d1.day=1;break;
		}
		if((d1.month==1||d1.month==3||d1.month==5||d1.month==7||d1.month==8||d1.month==10)&&d1.day<=30)
		{
			d1.day+=1;break;
		} 
		if(d1.month==12&&d1.day==31)
		{
			d1.year+=1;d1.month=1;d1.day=1;break;
		}
		if(d1.month==12&&d1.day<=30)
		{
			d1.year+=1;d1.month=1;d1.day+=1;break;
		}
		if((d1.month==4||d1.month==6||d1.month==9||d1.month==11)&&d1.day==30)
		{
			d1.day=1;d1.month+=1;break;
		}
		if((d1.month==4||d1.month==6||d1.month==9||d1.month==11)&&d1.day<30)
		{
			d1.day+=1;break;
		}
		if((d1.month==2&&(d1.year%4==0&&d1.year%100!=0)&&d1.day==29)||(d1.month==2&&(d1.year%400==0)&&d1.day==29))
		{
			d1.month+=1;d1.day=1;break;
		}
		if((d1.month==2&&(d1.year%4==0&&d1.year%100!=0)&&d1.day<29)||(d1.month==2&&(d1.year%400==0)&&d1.day<29))
		{
			d1.day+=1;break;
		}
		else if(d1.month==2&&d1.day==28)
		   {
			   d1.month+=1;d1.day=1;break;
		   }
		   if(d1.month==2&&d1.day<28)
		   {
		   	   d1.day+=1;break;
		   }
	}
	outputDate(d1);
}

void outputDate(struct Date d1)
{
	printf("%d-%d-%d",d1.year,d1.month,d1.day);
}

