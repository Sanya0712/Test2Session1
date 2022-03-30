#include <stdio.h>
int input_number()
{
  int a;
  printf("enter the number:\n");
  scanf("%d",&a);
  return a;
}

int is_prime(int n)
{
  int i,c;
  c=0;
  i=1;
  while(n>=i)
  {
    if (n%i==0)
    {
      c=c+1;
    }
    i++;   
  }
  return c;
}  

  void output(int n,int is_prime)
  {
    if (is_prime>2)
    {
      printf("%d is a composite number \n",n);
    }
    else
    {
      printf("%d is a prime number\n",n);
    }
  }

  int main()
  {
    int num,result;
    num=input_number();
    result=is_prime(num);
    output(num,result);
    return 0;
  }