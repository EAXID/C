//WL2002 2031053231 WXD 
//ѧ������

#include<stdio.h>

typedef struct Studen
{
 
    char s[15];//�Ĵ�ģ����˾Ͷ��ˣ�Ī������� 

	char sNo[15];//ѧ��
	char sName[15];//����
	float grade[4];//3�ſγɼ������һλ��ƽ���� 
}Student;
void output(Student a[],int n);//��� 
void intput(Student a[],int n);//���� 
void paixv(Student k[],int n);//���� 
int main() 
{
	int num;
	char m[15];
	printf("������Ҫ�����ѧ������");
	scanf("%d",&num);
	Student s[100];
	intput(s,num);
	output(s,num);
	printf("\n����1��������");
	int a;
	scanf("%d",&a);
	if(!(a-1))
	{
	    printf("�����\n");
		paixv(s,num); 
	} 
	//printf("������Ҫ��ѯѧ����ѧ��");
	//sacnf("%s",) 
}
	
void intput(Student a[],int n)//���� 
{
	int i,j;
	float m; 
	for(i=0;i<n;i++)
	{
		a[i].s[15]='1';
		printf("�������%d��ѧ����ѧ��",i+1);
		scanf("%s",&a[i].sNo);
		printf("�������%d��ѧ��������",i+1);
		scanf("%s",&a[i].sName); 
		printf("�������%d��ѧ���ĳɼ�\n",i+1);
		m=0;
		for(j=0;j<3;j++) 
		{
			printf("�������%d��ѧ���ĵ�%d�ųɼ�",i+1,j+1);
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
	printf("|���|ѧ��           |����           |��һ�ųɼ�|�ڶ��ųɼ�|�����ųɼ�|ƽ����    |\n");
	for(i=0;i<n;i++)
	{
    printf("|%4d|%15s|%15s|%10f|%10f|%10f|%10f|",i+1,a[i].sNo,a[i].sName,
	a[i].grade[0],a[i].grade[1],a[i].grade[2],a[i].grade[3]);
	if(i-n)
	{
		printf("\n");
	}
	} 
	printf("��������������������������������������������������������������������������������");
} 

void paixv(Student k[],int n)
{
	int i,j;
	Student temp; 
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp.s[15]=k[i].s[15];
		temp.grade[0]=k[i].grade[0];//����һ�� 
		temp.grade[1]=k[i].grade[1];//���ڶ��� 
		temp.grade[2]=k[i].grade[2];//�������� 
		temp.sName [15]=k[i].sName[15];//������ 
		temp.sNo[15]=k[i].sNo[15];//��ѧ�� 
	    temp.grade[3]=k[i].grade[3];//��ƽ���� 
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
