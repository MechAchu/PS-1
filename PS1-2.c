#include <stdio.h>
#include <math.h>

int main(void) {
  int x;
  printf("\nEnter an integer\n");
  scanf("\n%i", &x);
  if (x % 2 == 0){
    printf("\nThe number is even");
  }
  else{
    printf("\nThe number is odd");
  }
}
