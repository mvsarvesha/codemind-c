#include <stdio.h>
int main() {
  int n;
  double arr[100];
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
      scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("%.0lf", arr[0]);

  
}
