//WL2002 2031053231 WXD
//Count the number of letters and numbers in case

#include<stdio.h>
int main(void)

{
	int length,n,i=0,j=0,l=0;
	printf("�������ַ���"); 
    scanf("%d",&length); 
    char array[length];
    printf("�����������ַ�"); 
    for(n=0;n<=length;n++)
    {
    	scanf("%c",&array[n]);
    	if((array[n]>='A')&&(array[n]<='Z'))
    	{
    		i++;
		}
		else if((array[n]>='a')&&(array[n]<='z'))
    	     {
   	    	     j++;
		     }
		     else if((array[n]>='0')&&(array[n]<='9'))
     	          {
    		           l++;
		          }
    }	
	printf("��д��%d\nСд��%d\n������%d",i,j,l);
	return 0; 
}
