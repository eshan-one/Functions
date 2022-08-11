#include<stdio.h>
#include<stdlib.h>

int prime_factors(int n);

int main()
{
  int number;
  printf("Enter any number:\n");
  scanf("%d",&number);

  prime_factors( number);
  return 0;
}

int prime_factors(int n)
{
  int i=2;

  

  while(n>1)
    {
      if(n%i==0)
      {
        printf("\n%d",i);
        n = n/i;
      }

      else
      {
        i++;
        
      }
    }

  
  
  
}
