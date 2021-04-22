//WL2002 2031053231 WXD
//2020.12.21.2
#include<stdio.h>
#include<math.h>
struct point
{
	float x;
	float y;
};
struct Triangle
{
	struct point p1;
	struct point p2;
	struct point p3;
};
struct Edge 
{
	float edge1;
	float edge2;
	float edge3;
};
void type(struct Edge E);
float Perimeter(struct Edge E);
float area(struct Edge E);
struct Edge conver(struct point p1,struct point p2,struct point p3);
int yesnotriangle(struct Edge E);
int main(void)
{
	struct point p1;
	struct point p2;
	struct point p3;
	struct Edge d;
	printf("请输入第一个点的x和y");
	scanf("%f%f",&p1.x,&p1.y); 
	printf("请输入第二个点的x和y");
	scanf("%f%f",&p2.x,&p2.y); 
	printf("请输入第三个点的x和y");
	scanf("%f%f",&p3.x,&p3.y); 
	d=conver(p1,p2,p3);
	if(yesnotriangle(d)==1)
	{
		printf("面积是 %.2f\n周长是 %.2f\n",area(d),Perimeter(d));
		type(d);
	}
	else
	{
		printf("输入错误");
	}
}

struct Edge conver(struct point p1,struct point p2,struct point p3)
{
	struct Edge E;
	E.edge1=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	E.edge2=sqrt((p2.x-p3.x)*(p2.x-p3.x)+(p2.y-p3.y)*(p2.y-p3.y));
	E.edge3=sqrt((p3.x-p1.x)*(p3.x-p1.x)+(p3.y-p1.y)*(p3.y-p1.y));
	return E;
}
int yesnotriangle(struct Edge E)
{
	if(E.edge1>0&&E.edge2>0&&E.edge3>0&&E.edge1+E.edge2>E.edge3&&E.edge2+E.edge3>E.edge1&&E.edge1+E.edge3>E.edge2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
float area(struct Edge E)//面积 
{
	float area,p;
	p=Perimeter(E)/2;
	area=sqrt(p*(p-E.edge1)*(p-E.edge2)*(p-E.edge3));
	return area;
}
float Perimeter(struct Edge E)//周长 
{
	float Perimeter;
	Perimeter=E.edge1+E.edge2+E.edge3;
	return Perimeter;
}
void type(struct Edge E)//类型 
{
	float edge1,edge2,edge3;
	edge1=E.edge1;
	edge2=E.edge2;
	edge3=E.edge3;
	if(edge1==edge2&&edge1==edge3)
	{
		printf("这是等边三角形\n");//等边 
	}
	else if(edge1==edge2||edge1==edge3||edge2==edge3)
	{
		if(edge1*edge1+edge2*edge2==edge3*edge3||edge1*edge1+edge3*edge3==edge2*edge2||edge3*edge3+edge2*edge2==edge1*edge1)
		{
			printf("这是等腰直角三角形\n");//等腰 直角 
		}	
		else
		{
			printf("这是等腰三角形\n");//等腰 
		}
	}
	else if(edge1*edge1+edge2*edge2==edge3*edge3||edge1*edge1+edge3*edge3==edge2*edge2||edge3*edge3+edge2*edge2==edge1*edge1)   
	{
		printf("这是直角三角形\n");//直角 
	}
	else
	{
		printf("这是普通三角形\n");//普通 
	} 	
}




























