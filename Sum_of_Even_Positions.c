#include <stdio.h>
int main() {
  int n,sum=0;
  int arr[100];
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
   // printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
    if(i%2==0)
        sum +=arr[i];
  }

  
  printf("%d", sum);

  return 0;
}
