#include <stdio.h>
int main() {
  int n;
  
  double arr[100],sum;
 // printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    //printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
    if(i%2 !=0) 
        sum +=arr[i];
  }

  printf("%.0lf", sum);

  return 0;
}
