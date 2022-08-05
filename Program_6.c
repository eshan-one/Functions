#include<stdio.h>
#include<stdlib.h>

int factorial(int n);
int main()
{

  int N;
  printf("Enter the value of n:\n");
  scanf("%d", &N);
  printf("\nn = %d ", N);

  factorial(N);

  printf("\nThe value of %d factorial is:\n",N);
  printf("%d",factorial(N));
  

  return 0;
}

int factorial(int n)
{
   int f=1;
  
  while(n>0)
  {
    f=n*f;
    n--;
    
  }
  

  return f;


  
}
