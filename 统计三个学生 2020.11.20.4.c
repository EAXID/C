//WL2002 2031053231 WXD
//11��20�յ����� 

 #include "stdio.h"
void main( )
{ int  stu[3][4],i,j,t[3];
  float  sum=0,a[3];
  for(i=0; i<3; i++)          /* ��������ѧ����4�ſγ̿��Գɼ� */
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
	      sum+=stu[i][j];         /* sum�������ѧ����4�ſγ��ܳɼ� */
          t[i]+=stu[i][j];        /* t[i]��ŵ�i��ѧ����4�ſγ̳ɼ� */
      }
      printf("%-6d",t[i]);      /* �����i��ѧ�����ܳɼ� */
      printf("%-6d",t[i]/4);
      printf("%-6.2f\n",a[i]);  /*a[i]��ŵ�i��ѧ����4�ſγ�ƽ���ɼ�*/
  }
  printf("average = %.2f\n",sum/12.0);
}
