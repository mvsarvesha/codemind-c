#include<stdio.h>
int main(){
    int n,c,d;
    scanf("%d",&n);
    if (n%10==0 && n%5==0)
    {
        c = n/10;
        printf("%d",c);
    }
    else 
    {
        if(n%10 == 0 ) {
        c=n/10;
        printf("%d",c);
        }
        else  
        { 
            if(n%5==0 && n%10!=0)
             {
                 c=n/10;
                 d = n -c*10;
                 d = d/5;
                 printf("%d",c+d);
            }
            else  
            {
                 printf("-1");
             }
        }
    }
}