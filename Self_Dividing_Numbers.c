#include<stdio.h>
int is_self_dividing(int n) {
    int t =n;
    while(t>0) {
        int r = t%10;
        if(r==0 ||n%r !=0) return 0;
        t = t/10;
    }
    return 1;
    
}
int main(){
    int start,stop,i,j;
    scanf("%d%d",&start,&stop);
    for( i=start;i<=stop;i++) {
        j = is_self_dividing(i);
        if(j==1) printf("%d ",i);
    }
    
}