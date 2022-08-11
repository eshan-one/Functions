#include<stdio.h>
#include<stdlib.h>

int digit_checker(int,int);
int main()
{
  int n,d;
  int a;
  printf("Enter the number:\n");
  scanf("%d",&n);

  printf("\nEnter the digit:\n");
  scanf("%d", &d);

  a = digit_checker(n,d);

  printf("%d",a);

  return 0;
  }




  int digit_checker(int number, int digit)
  {
    int remainder;
    while(number)
    {
      remainder=number%10;

      if(remainder==digit)
      
      {
        return 1;
        
      }
      number = number/10;
      
    }
  return 0;
  }
  
  
