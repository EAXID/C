//WL2002 2031053231 WXD
//11月20日第四题 

 #include "stdio.h"
void main( )
{ int  stu[3][4],i,j,t[3];
  float  sum=0,a[3];
  for(i=0; i<3; i++)          /* 输入三个学生的4门课程考试成绩 */
  {
      for(j=0; j<4; j++) 
	  {
	      scanf("%d",&stu[i][j]);
	  }     
  } 
  for(i=0; i<3; i++)
  { 
      t[i]=0;
      for(j=0; j<4; j++)
      { 
	      sum+=stu[i][j];         /* sum存放三个学生的4门课程总成绩 */
          t[i]+=stu[i][j];        /* t[i]存放第i个学生的4门课程成绩 */
      }
      printf("%-6d",t[i]);      /* 输出第i个学生的总成绩 */
      printf("%-6d",t[i]/4);
      printf("%-6.2f\n",a[i]);  /*a[i]存放第i个学生的4门课程平均成绩*/
  }
  printf("average = %.2f\n",sum/12.0);
}
