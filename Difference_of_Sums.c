#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    int sum,sum_sq;
    scanf("%d",&n);
    sum=0;
    sum_sq=0;
    for(i=1;i<=n;i++) {
        sum +=i;
        sum_sq+=i*i;
    }
    printf("%d",abs(sum_sq-sum*sum));
        
    
}