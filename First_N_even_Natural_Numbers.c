#include<stdio.h>
int main(){
    int n,i,j=0;
    scanf("%d",&n);
    for (i=2*n;i>0;i--){
        if(i%2==0) {
            printf("%d ",i);
        }
    }
    
}