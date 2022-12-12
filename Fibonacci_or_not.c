#include <stdio.h>
#include <math.h>
  int isPerfectSquare(int x)
    {
       int s = (int)sqrt(x); 
       return (s*s == x);
     }  
   int isFibonacci(int x)
      {
         return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
     }
    int main()
    {
        int n,y;
        scanf("%d",&n);
        y = isFibonacci(n);
      if (y>0)
		{	
		 printf("True"); 
		} 
	else 
	    printf("False");        
   }
