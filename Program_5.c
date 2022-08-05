#include<stdio.h>
#include<stdlib.h>

void first_N(int n);
int main()
{

  int N;
  printf("Enter the value of n:\n");
  scanf("%d",&N);

  first_N(N);
  return 0;

  
}

  

void first_N(int n)
{
  int x;
  printf("The first %d natural numbers are:\n",n);
  for(x=1;x<=2*n;x+=2)
    {
      printf("\n%d",x);
      
    }

  
}
