#include<stdio.h>
int main(){
    float cost,s,a,b;
    int units;
    scanf("%d",&units);
    if (units<199) {
        cost = units *1.20;
        b=1.20;
    }
    if(units>=200 && units <400) { cost = units*1.40;b=1.40; } 
    if(units>=400 && units <600) { cost = units*1.60; b=1.60;}
    if(units>=600 && units <800) { cost = units*1.80; b=1.80;}
    if(units>=800 ) { cost = units*2; b=2;}

    if (cost >400) {
        s = cost *0.15;
    }
    else { s =0; }
    printf("Units Consumed: %d
",units);
    printf("Cost per Unit: %0.2f
",b);
    printf("Bill: %0.2f
",cost);
    printf("Surcharge: %0.2f
",s);
    printf("Total Amount: %0.2f",cost+s);
    
}