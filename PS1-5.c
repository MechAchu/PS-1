#include <stdio.h>
#include <math.h>

int main(){
  int sum = 0;
  int j, N;
  printf("Enter N");
  printf("\n");
  scanf("%i", &N);
  for(j = 0; j < (N + 1); j++){
    sum += j;
  }
  printf("The sum is %30i \n", sum);
}

/*
So in order to get the answer of the arithmetic sequence for N = 10 we have
to add each of the numbers in order from 1-10, so it's 1+2+3+4+5+6+7+8+9+10
which is equal to 55 which is the same as the output from the code. The way
that the code works is by asking the user which N value they would like to use
and then having a for loop which adds each number up to N, the reason we have
N+1 instead of just N is because if we only had N it would stop at
1+2+3+4+5+6+7+8+9 and wouldn't include the 10. Another way to fix this
though is to use <= instead of <. Then when the for loop is over, or when its
condition is false it then prints out the sum for the user to see.
*/

/*
My output is correct for N = 60,000 with it being 1800030000

My output is correct for N = 65535 with it being 2147450880

When I run N = 65536 the output is too large for the system so it overfills
and since it goes past the maximum value it goes to the minimum value of
-2147450880 for a 32 bit integer.
*/
