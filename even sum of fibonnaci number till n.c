#include<stdio.h>
int main()
{
	int i,sum=0,n,fsum = 0;
	int a=0, b=1,c;
	printf("Enter the Number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n*2-2;i++)
	{
		c = a+b;
		if(i%2==0)
		{
			fsum += c;
		}
		a=b;
		b=c;
	}
	printf("Fibo Sum : %d",fsum);
}
	
