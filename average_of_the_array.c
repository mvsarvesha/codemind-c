#include <stdio.h>
int main() {
  int n;
 int arr[100];
 float sum=0;
 // printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    //printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
    sum +=arr[i];
  }

    printf("%.2f", sum/n);

  //return 0;
}
