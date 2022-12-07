#include<stdio.h>
int main(){
    int n;
    float cost,s;
    scanf("%d",&n);
    if (n <=199) {
        cost = 1.20 *n;
    }
    else if (n >=200 && n<400) {
        cost = 1.50 *n;
    }
    else if(n>=400 && n<600) {
        cost = 1.80 * n;
    }
    else if (n>=600) {
        cost = 2.0 *n;
    }
    
    if (cost >400) {
        s = cost * 0.15;
        if (s <100) {
         s =100;   
        }
        else {
            s = cost * 0.15;
        }
        
    }
    else { s =100;}
    
    printf("%.2f",cost+s);
}