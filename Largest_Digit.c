#include<stdio.h>
int main(){
    int n,lar,r;
    scanf("%d",&n);
    lar = n%10;
    while(n>0) {
        r = n%10;
        if(r > lar) {
            lar = r;
        }
        n=n/10;
        
    }
    printf("%d",lar);
}