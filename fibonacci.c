#include<stdio.h>
int main(){
    int n,i=0;
    int fab1=0,fab2=1,fab3;
    scanf("%d",&n);
    printf("%d %d",fab1,fab2);
    while(i<n-2) {
        fab3 = fab1 +fab2;
        printf(" %d",fab3);
        fab1 =fab2;
        fab2 = fab3;
        i++;
        
    }
}