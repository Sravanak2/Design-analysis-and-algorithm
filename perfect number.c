#include <stdio.h>
int main()
{
    int num,sum=0,i=1;
    printf("Enter a Number:");
    scanf("%d", &num);
	while(i<num)  
    {  
    	if(num%i==0)  
        sum+=i;  
		i++;  
    }
    if (sum==num)
        printf("True");
    else
        printf("False");
    return 0;
}
