#include<stdio.h>
#include<math.h>
int main(){
    int n,a,i;
    
    scanf("%d%d%d",&n,&a);
    
    for(i=1;i<=a;i++) {
        printf("%d x %d = %d
",n,i,i*n);
        
    }
}    