#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    
    scanf("%d%d%d",&n);
    
    for(i=1;i<=12;i++) {
        printf("%d x %d = %d
",n,i,i*n);
        
    }
}    