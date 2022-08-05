#include<stdio.h>
#include<stdlib.h>

int odd_or_even(int x);
int main()
{
  int a;
  printf("Enter a natural number:\n");
  scanf("%d", &a);

  odd_or_even(a);

  printf("\n\n%d", odd_or_even(a));

  
    
}


int odd_or_even(int x)
{
  int rem;

  rem = x%2==0;

   switch(rem)
     {
       case 1:
       
       return 1;
       break;

       case 0:
       
       return 0;
       break;
     }

  return rem;
  
}  
