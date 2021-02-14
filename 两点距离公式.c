//WL2002 2031053231 WXD
// Distance between two points
#include<stdio.h>
#include<math.h>

int main()

{
	float point1_x,point1_y,point2_x,point2_y,L;
	scanf("%f%f%f%f",&point1_x,&point1_y,&point2_x,&point2_y);
	L=sqrt((point1_x-point2_x)*(point1_x-point2_x)+(point1_y-point2_y)*(point1_y-point2_y));
	printf("L is : %f\n444",L);
}
