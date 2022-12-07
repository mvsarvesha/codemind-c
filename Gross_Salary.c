#include<stdio.h>
int main(){
    int n;
    float total;
    scanf("%d",&n);
    if (n<=10000) {
       total = n + 0.8*n + 0.2*n;
    }
    else if(n<= 20000) {
        total = n + 0.9*n + 0.25*n;
    }
    else if ( n>20000) {
        total = n + 0.95*n + 0.3*n;
    }
    printf("%0.2f",total);
}