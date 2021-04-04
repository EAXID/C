//WL2002 2031053231 WXD
//2020.12.4.2

#include<stdio.h>
 int binarySearch(int array[],int number,int data); 
int main(void)
{
	int num,date,j;
	printf("请输入数组长度");
	scanf("%d",&num);
	int a[num];
	printf("请有序的输入数组"); 
	for(j=0;j<num;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("请输入要查找的数据");
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
                    printf("输入的数的下标是%d",mid);
                    break;
			    }
	        }
	if(i==0&&data!=array[0])
	{
		printf("查无此数"); 
	}
	else if(data!=array[number-1])
	{
		printf("输入的数的下标是%d",0);
	}
}
	 
