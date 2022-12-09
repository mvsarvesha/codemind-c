#include<stdio.h>
int main (){
    int n,m,i=1;
    scanf("%d%d",&n,&m);
    while(i) {
        if(i%n==0 && i%m==0) {
            printf("%d",i);
            break;
        }
        i++;
    }
}