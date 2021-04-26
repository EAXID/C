//WL2002 2031053231 WXD 
//学生排序

#include<stdio.h>

typedef struct Studen
{
 
    char s[15];//改错的，加了就对了，莫名其妙的 

	char sNo[15];//学号
	char sName[15];//姓名
	float grade[4];//3门课成绩，最后一位放平均分 
}Student;
void output(Student a[],int n);//输出 
void intput(Student a[],int n);//输入 
void paixv(Student k[],int n);//排序 
int main() 
{
	int num;
	char m[15];
	printf("请输入要输入的学生人数");
	scanf("%d",&num);
	Student s[100];
	intput(s,num);
	output(s,num);
	printf("\n输入1进行排序");
	int a;
	scanf("%d",&a);
	if(!(a-1))
	{
	    printf("排序后：\n");
		paixv(s,num); 
	} 
	//printf("请输入要查询学生的学号");
	//sacnf("%s",) 
}
	
void intput(Student a[],int n)//输入 
{
	int i,j;
	float m; 
	for(i=0;i<n;i++)
	{
		a[i].s[15]='1';
		printf("请输入第%d个学生的学号",i+1);
		scanf("%s",&a[i].sNo);
		printf("请输入第%d个学生的姓名",i+1);
		scanf("%s",&a[i].sName); 
		printf("请输入第%d个学生的成绩\n",i+1);
		m=0;
		for(j=0;j<3;j++) 
		{
			printf("请输入第%d个学生的第%d门成绩",i+1,j+1);
			scanf("%f",&a[i].grade[j]);
			m+=a[i].grade[j];
		}
		m/=3;
		a[i].grade[j]=m;
	}
}

void output(Student a[],int n)
{
	int i;
	printf("__________________________________________________________________________________\n"); 
	printf("|序号|学号           |姓名           |第一门成绩|第二门成绩|第三门成绩|平均分    |\n");
	for(i=0;i<n;i++)
	{
    printf("|%4d|%15s|%15s|%10f|%10f|%10f|%10f|",i+1,a[i].sNo,a[i].sName,
	a[i].grade[0],a[i].grade[1],a[i].grade[2],a[i].grade[3]);
	if(i-n)
	{
		printf("\n");
	}
	} 
	printf("￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣");
} 

void paixv(Student k[],int n)
{
	int i,j;
	Student temp; 
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp.s[15]=k[i].s[15];
		temp.grade[0]=k[i].grade[0];//换第一门 
		temp.grade[1]=k[i].grade[1];//换第二门 
		temp.grade[2]=k[i].grade[2];//换第三门 
		temp.sName [15]=k[i].sName[15];//换名字 
		temp.sNo[15]=k[i].sNo[15];//换学号 
	    temp.grade[3]=k[i].grade[3];//换平均分 
		while(j>=0&&k[j].grade[3]>temp.grade[3])
		{
			k[j+1].s[15]=k[j].s[15];
			k[j+1].grade[0]=k[j].grade[0];
			k[j+1].grade[1]=k[j].grade[1];
			k[j+1].grade[2]=k[j].grade[2];
			k[j+1].sName[15]=k[j].sName[15];
		    k[j+1].grade[3]=k[j].grade[3];
			k[j+1].sNo[15]=k[j].sNo[15];
			j--;
		}
		k[j+1].s[15]=temp.s[15];
		k[j+1].grade[0]=temp.grade[0];
		k[j+1].grade[1]=temp.grade[1];
		k[j+1].grade[2]=temp.grade[2];
		k[j+1].grade[3]=temp.grade[3];
		k[j+1].sName[15]=temp.sName [15];
		k[j+1].sNo[15]=temp.sNo [15];
	}
	output(k,n);
}
