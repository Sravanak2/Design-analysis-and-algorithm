#include<stdio.h>
int perfect(int j)
{
	int i,sum = 0,num;
	int count = 0;
	int arr[20];
	printf("Enter Num: ");
	scanf("%d",&num);
	if(num>0 && num % 1==0)
	{
		for(j=1;j<=8128;j++)
		{
		for(i=1;i<j;i++)
		{
		if(j%i==0)
		{
			sum+=i;
		}
	}
	if(sum == j)
	{
		count+=1;
		arr[count] = sum;
	} sum = 0;
	}
	if(num>4)
	{
		printf("There are only 4 Perfect Numbers!\n");
		for(i=1;i<=4;i++)
		{
			printf("Perfect %d : %d\n",i,arr[i]);
		}
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			printf("Perfect %d : %d\n",i,arr[i]);
		}	
	}	
	}
	else
	{
		printf("Invalid Input!");
	}	
}
int main()
{
	int j;
	perfect(j);
}
