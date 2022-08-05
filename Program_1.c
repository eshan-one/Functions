#include<stdio.h>
#include<stdlib.h>
float area(int);
int main()
{
  float x;
  printf("Enter the radius of the circle:\n");
  scanf("%f", &x);
  area(x);
  printf("The radius of the circle is %f",area(x));
  
    
}

float area(int r)
{
  float s;
  s = 3.142*r*r;
  return s;

  
}
