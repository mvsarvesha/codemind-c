#include<stdio.h>
int main (){
    int a,b,c,d,e;
    float p;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    p = (a+b+c+d+e)* 1.0/5;
    if (p>=90) {
        printf("Grade A");
    }
    else if (p>=80 && p <90) {
        printf("Grade B");
    }
    else if (p>=70 && p <80) {
        printf("Grade C");
    }
    else if (p>=60 && p <70) {
        printf("Grade D");
    }
    else if (p>=40 && p <60) {
        printf("Grade E");
    }
    else if (p <40) {
        printf("Grade F");
    }
}