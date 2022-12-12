#include <stdio.h>    
     
//isHappyNumber() will determine whether a number is happy or not    
int isHappyNumber(int num){    
    int rem = 0, sum = 0;    
        
    //Calculates the sum of squares of digits    
    while(num > 0){    
        rem = num%10;    
        sum = sum + (rem*rem);    
        num = num/10;    
    }    
    return sum;    
}    
        
int main()    
{    
    int num,result;
    scanf("%d",&num);
    result = num;    
        
    while(result >9){    
        result = isHappyNumber(result);    
    }    
        
    //Happy number always ends with 1    
    if(result == 1 || result ==7)    
        printf("True");    
    //Unhappy number ends in a cycle of repeating numbers which contains 4    
    else     
        printf("False");     
     
        
}    