#include<stdio.h>
#include<stdlib.h>

double simple_interest(double, double,double);
int main()
{
  double a,b,c,x;
  printf("Enter the principal, rate of interest and time:\n");
  scanf("%lf%lf%lf",&a,&b,&c);
  printf(" p = %lf",a);
  printf(" \nr = %lf",b);
  printf(" \nt = %lf",c);

  x =simple_interest(a,b,c);

  printf("\nThe simple interest is %lf",x);

  return 0;

  
  
}

double simple_interest(double p, double r,double t)
{
  double s;
  s = (p*r*t)/100;
  return s;
  
}
