#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if (n-30*m>0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}