#include<stdio.h>
int reverse(int x) {
    int r,rev_num=0;
    while(x >0) {
        r = x%10;
        rev_num = rev_num *10 +r;
        x = x/10;
    }
    return(rev_num);
    
}

int main (){
    int n,rev,sq,sq_rev;
    scanf("%d",&n);
    sq = n*n;
    rev = reverse(n);
    sq_rev = reverse(rev*rev);
    
    if (sq_rev==sq)
        printf("True");
    else 
        printf("False");
}