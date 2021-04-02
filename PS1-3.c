#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, root1, root2;
  printf("Please enter a, b, and c \n");
  scanf("%lf %lf %lf", &a, &b, &c);

  if (b*b-(4*a*c) >= 0) {
    root1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
    root2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
    printf("\nFirst root is %lf", root1);
    printf("\nSecond root is %lf", root2);
  }
  else{
    printf("\nDiscriminant is negative! No real roots!");
  }
  printf("\n");
}

/*
If we imagine a parabola with only one real solution that means the discriminant
must be equal to zero. An example of this would be x^2. D = b^2 - 4ac, b =0
a = 1, c = 0, so D = 0 - 0 = 0. This is because the lowest point of the
parabola rests on the x-axis.

If we imagine a parabola with two real solutions that means the discriminant
must be greater than zero. An example of this would be x^2 - 1 or -x^2 + 1.
D = b^2 - 4ac, b = 0, a = 1, c = -1, so D = 0 + 4, so D = 4 > 0 and has two
roots. Because the lowest point of the parabola is below the x-axis, and is
going upwards, or it can be above the x-axis and going downwards.

If we imagine a parabola with no real solutions that means the discriminant is
less than zero. An example of this would be x^2 + 1. D = b^2 - 4ac, b = 0,
a = 1, c = 1, so D = 0 - 4 < 0, so it has no roots. This is because the lowest
point of the parabola is above the x-axis and it can't touch the x-axis, or the
highest point of the parabola is below the x-axis.
*/
