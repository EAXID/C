// WL2002 2031053231 wxd
//2020��12��4�յ�4��
#include <stdio.h>
int power(int x, int p); 
int main(void)
{
int x, p;
scanf("%d%d", &x, &p);
printf("%d\n", power(x, p));
}
int power(int x, int p)
{
if (p == 0)
return 1;
else
return (x * power(x, p-1));
}
