//WL2002 2031053231 WXD
//2020.12.4.2

#include<stdio.h>
 int binarySearch(int array[],int number,int data); 
int main(void)
{
	int num,date,j;
	printf("���������鳤��");
	scanf("%d",&num);
	int a[num];
	printf("���������������"); 
	for(j=0;j<num;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("������Ҫ���ҵ�����");
	scanf("%d",&date); 
	binarySearch(a,num,date);
	return 0;
} 
 
 int binarySearch(int array[],int number,int data)
 {
 	int min=0,max=number,mid,i=0;
	 	    for(;min+1!=max;)
   	        {
 		        mid=(min+max)/2;
 		        if(data>array[mid])
 		        {
 			        min=mid;
		        }
		        else if(data<array[mid])
		        {
			        max=mid;
		        }
		        else if(data==array[mid])
		        {
		        	i++;
                    printf("����������±���%d",mid);
                    break;
			    }
	        }
	if(i==0&&data!=array[0])
	{
		printf("���޴���"); 
	}
	else if(data!=array[number-1])
	{
		printf("����������±���%d",0);
	}
}
	 
