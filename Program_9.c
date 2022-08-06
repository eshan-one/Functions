#include <stdio.h>
#include<stdlib.h>
int digit_checker(int number,int digit);
int main()
{
  int n,digit,r;
  int a;
  printf("Enter the number:\n");
  scanf("%d",&n);
  printf("\nEnter the digit:\n");
  scanf("%d",&digit);

  a = digit_checker(n,digit);

  printf("\n%cYes the number containes the digit", a);

  return 0;

}




int digit_checker(int number,int digit)
{
  int remainder;
  char Y;

  while(number>0)
    {
      remainder = number%10;
      if(remainder==digit)
      {
        printf("%c",'Y');
        break;
      }

      else
      {
        number = number/10;
        
        
      }
    }

  return Y;
}

  
