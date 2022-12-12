#include<stdio.h>
int main() {
    int num,sum=0, i;
    scanf("%d",&num);
    for(i = 1; i< num; i++) 
	{
		if(num%i == 0)
		{
			sum += i;
		}
	}
	if (num==sum) {
	    printf("PERFECT");
	}
	else {
	    if(num < sum) {
		    printf("ABUNDANT");
	    }
	    else {
		    printf("DEFICIENT");
	    }
	}

}