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
  
  for(x=1;x<=n;x++)
    {
      printf("\n%d",x);
      
    }

  
}
