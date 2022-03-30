#include<stdio.h>
int input()
{
  int n;
  printf("enter the nth number you want to find in the series\n");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
  int i=0;
  int j=1;
  if (n==0)
  {
    return i;
  }
  else if (n==1)
  {
    return j;
  }
  else
  {
    int i,j,k,a;
    for(i=0,j=1,k=0;k<n-2;k++)
      {
        i=j;
        a=i+j;
        j=a;
      }
    return j;      
  }
}  
  
void output(int n,int fibbo)
  {
    printf("%d\n",fibbo);
  }
  
int main()
  {
    int a,result;
    a=input();
    result=find_fibo(a);
    output(a,result);
    return 0;
  }
