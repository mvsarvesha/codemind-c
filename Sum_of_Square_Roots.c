#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i;
    float sum;
    sum=0;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++){
        
            sum +=sqrt(i);
            
        
    }
    printf("%0.2f",sum);
} 