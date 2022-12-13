#include <stdio.h>
int main() {
  int n,sum=0;
 int arr[100];
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
      if(arr[i]%2==0) 
            sum +=arr[i];
  }

  printf("%d", sum);

  
}
