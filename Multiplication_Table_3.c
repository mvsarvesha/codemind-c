#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b,i;
    
    scanf("%d%d%d",&n,&a,&b);
    
    for(i=a;i<=b;i++) {
        printf("%d x %d = %d
",n,i,i*n);
        
    }
}    