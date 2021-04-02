#include <stdio.h>
#include <math.h>

int main(void){
  int j, N;
  long int fact;
  double x, sum;
  printf("Enter N \n");
  printf("\n");
  scanf("%i", &N);
  printf("Enter x\n");
  scanf("%lf", &x);
  sum = 1;
  fact = 1;
  for(j = 1; j < N; j++){
    fact = 2*j;
    sum += ((pow(-1, j) * pow(x, 2*j)) / (tgamma(fact+1)));
    printf("\n   %i    %lf", j, sum);
  }
  printf("\n");
}
