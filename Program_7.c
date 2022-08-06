#include <stdio.h>
#include<stdlib.h>

int num_of_combinations(int,int);
int main()
{
  int N,R;
  double x;
  printf("Enter the value of N:\n");
  scanf("\n%d",&N);
  printf("\nn = %d", N);

  printf("\nEnter the value of R:\n");
  scanf("\n%d",&R);
  printf("\nn = %d", R);

  x = num_of_combinations(N,R);

  printf("\nnCr = %lf ", x);

  return 0;
}


int num_of_combinations(int n , int r)
{
  int nf=1, rf=1, n_rf=1;
  int n_r;
  double nCr;
  // nf = n factorial 
  // rf = r factorial
  // n_rf = (n-r) factorial

  n_r = (n-r);

  while(n>0)
    {
      nf = n * nf;
      n--;
    }

  while(r>0)
    {
      rf = r * rf;
      r--;
    }

  while(n_r>0)
    {
      n_rf = n_r * n_rf;
      n_r--;
    }


  // Now we combine all thse reuslts and equate it to the formula for nCr.

  nCr = (nf)/((rf)*(n_rf));

  return nCr;

  
}

