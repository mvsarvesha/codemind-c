#include<stdio.h>
int main() {
    int n, k,m,days,x;
    scanf("%d%d%d",&n,&k,&m);
    days = n/k;
	x = n%k;
    if ( days<m ) 
    {
      printf("YES");
        
    }
    else 
    {
        if(x==0) {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}