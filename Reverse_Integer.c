#include<stdio.h>
int main() {
    int n,r;
    int flag=0,r1=0;
    scanf("%d", &n);
    if (n<0) {
        flag = 1;
        n = -1*n;
    }
    while (n > 0) {
        r = n % 10;
        r1 = r1 * 10 + r;
         n /= 10;
    }
    if(flag == 1) {
        r1 = -1 * r1;
    }
    printf("%d", r1);

}