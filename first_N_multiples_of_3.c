#include<stdio.h>
int main (){
    int n,i=1;
    scanf("%d",&n);
    while(i) {
        if(i%3==0) {
            printf("%d ",i);
            n--;
            if(n==0) break;
        }
        i++;
    }
}