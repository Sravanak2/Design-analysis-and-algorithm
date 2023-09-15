#include <stdio.h>
int main() 
{
    int num,orignum,rem,result=0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    orignum = num;

    while (orignum != 0) 
	{
       rem = orignum % 10;    
       result += rem*rem*rem;
       orignum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
