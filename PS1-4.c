#include <stdio.h>
#include <math.h>

int main(){
  double a, sum;
  int j, N;
  printf("\nEnter a\n");
  scanf("%lf", &a);
  printf("Enter N\n");
  scanf("%i", &N);
  printf("j sum");
  sum = 0;
  for (j = 0; j < N; j++){
    sum = sum + pow(a, j);
    printf("\n%i %12.6lf", j, sum);
  }
}

/*
The correct answer for the first case is 0.3^0 + 0.3^1 + 0.3^2 + 0.3^3 +
0.3^4 + 0.3^5 + 0.3^6 + 0.3^7 + 0.3^8 + 0.3^9 = 1.428563.

The correct answer for the second case is 0.8^0 + 0.8^1 + 0.8^2 + 0.8^3 +
0.8^4 + 0.8^5 + 0.8^6 + 0.8^7 + 0.8^8 + 0.8^9 = 4.463129
*/


/*
When given the values for a = 0.3 and N = 10 we get for the entire series 1.428563
which is entirely correct.

When given the values for a = 0.8 and N = 10, for the solution we get 4.463129
which is what we get in the code, so the solution is correct.
*/
