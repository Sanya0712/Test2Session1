#include<stdio.h>
#include<math.h>

void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the values of x1 , y1 , x2 , y2 :\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void find_distance(float x1,float y1,float x2, float y2,float *distance)
{
  *distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void output(float x1,float y1,float x2, float y2,float distance)
{
  printf("the distance between point (%f,%f) and (%f,%f) is %.4f\n",x1,y1,x2,y2,sqrt(distance));
}

int main()
{
  float l,m,n,q,result;
  input(&l,&m,&n,&q);
  find_distance(l,m,n,q,&result);
  output(l,m,n,q,result);
  return 0;
}