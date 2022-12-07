#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<=7) {
      if (n==1) { printf("monday");} 
      if (n==2) { printf("tuesday");}
      if (n==3) { printf("wednesday");}
      if (n==4) { printf("thursday");}
      if (n==5) { printf("friday");}
      if (n==6) { printf("saturday");}
      if (n==7) { printf("sunday");}
    }
    else {
        printf("invalid input ");
    }
}