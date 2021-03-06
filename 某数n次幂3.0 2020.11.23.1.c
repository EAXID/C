// WL2002 2031053231 wxd
//2020年11月23日第1题

#include<stdio.h>
int a(int data,int n);
int main (void)
{
    printf("Please enter base number and index\n");
    int m,b,j;
    scanf("%d%d",&m,&j);
    b=a(m,j);
    printf("power=%d",b);
    return 0;
}
int a(int data,int n){
    int power,i;
    for(i=1,power=1;
    i<=n;
    i++)	{
        power=power*data;
    }
    return power;
}
