#include<stdio.h>
int main(){
    int n,i,sum=0;
    int arr[n];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d", &arr[i]);
        sum +=arr[i];
    }
    printf("%d",sum);
}