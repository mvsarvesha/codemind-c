#include<stdio.h>
int main() {
    int n,odd=0,even=0,r;
    scanf("%d", &n);
    while (n>0) {
        r = n%10;
        if(r%2==0) {
            even+=1;
            n=n/10;
        }
        else {
            odd+=1;
             n=n/10;
        }
    }
    if (even==0 ) {
        printf("Odd");
    }
    if (odd==0 ) {
        printf("Even");
    }
    if(odd !=0 && even !=0) {
        printf("Mixed");
    }
    
}