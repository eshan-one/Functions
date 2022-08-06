#include <stdio.h>
#include<stdlib.h>

int num_of_arrangements(int,int);
int main()
{
  int N,R;
  double x;
  printf("Enter the value of N:\n");
  scanf("\n%d",&N);
  printf("\nn = %d", N);

  printf("\n\nEnter the value of R:\n");
  scanf("\n%d",&R);
  printf("\nr = %d", R);

  x = num_of_arrangements(N,R);

  printf("\n\nnPr = %lf ", x);

  return 0;
}


int num_of_arrangements(int n , int r)
{
  int nf=1, n_rf=1;
  int n_r;
  double nPr;
  // nf = n factorial 
  
  // n_rf = (n-r) factorial

  n_r = (n-r);

  while(n>0)
    {
      nf = n * nf;
      n--;
    }

  

  while(n_r>0)
    {
      n_rf = n_r * n_rf;
      n_r--;
    }


  // Now we combine all thse reuslts and equate it to the formula for nPr.

  nPr = (nf)/(n_rf);

  return nPr;

  
}
  
