#include<stdio.h>
#include<math.h>
int main(){
    int n,cars;
    scanf("%d",&n);
    if (n <=4) { cars =1; printf("%d",cars); }
    if(n%4 ==0 && n >4){
        cars =ceil(n/4);
        printf("%d",cars); 
    }
	if (n%4 !=0 && n >4)
	{
		cars =ceil(n/4)+1;
        printf("%d",cars); 
       }    
}