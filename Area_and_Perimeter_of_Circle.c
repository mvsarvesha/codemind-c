#include <stdio.h>



int main() {
    float radius, perimeter, area;

    scanf("%f", &radius);

  area = 3.14 * radius * radius;
 // printf("%0.2f", area);
  perimeter = 2 * 3.14 * radius;
  printf("%0.2f
%0.2f",area, perimeter);
}