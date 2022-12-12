#include<stdio.h>
int main() {
    int n,r,sum=0;
    scanf("%d",&n);
    while (n >9) {
        while( n>0) {
            r = n%10;
            sum = sum+r;
            n = n/10;
        }
        if(sum >9) {
          n=sum;
          sum=0;
          continue;
        }
        printf("%d",sum);
        
    }
    
}