#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if (m-n>0) {
        printf("Profit");
    }
    else {
        printf("Loss");
    }
}