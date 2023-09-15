#include <stdio.h>  
#include <conio.h>  
int main()  
{     
 
    int num1,num2,i,gcd	;
	printf("Enter first value ");
	scanf("%d",&num1);
	printf("Enter second value ");
	scanf("%d",&num2);
	if(num1>0 && num2>0)
	{
	for(i=1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
        gcd = i;
    }
    printf( " GCD of two numbers %d.", gcd);
	}
	else
	{
		printf("invalid input");
	}
}  
