#include<stdio.h>
#include<string.h>
int main()
{
	int a[20],num,N,M,i,j,temp;
	printf("Enter No of Elements: \n");
	scanf("%d",&num);
	if(num%1==0 && num>0)
	{
		printf("Enter elements of the Array: \n");
		for(i=0;i<num;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<num;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("Sorted Array: ");
		for(i=0;i<num;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		printf("Enter M for Mth Max: ");
		scanf("%d",&M);
		printf("Enter N for Nth Min: ");
		scanf("%d",&N);
		if(N>0 && M>0 && M<=num && N<=num)
		{
			printf("Mth Max No : %d   ",a[num-M]);
			printf("Nth Min No : %d",a[N-1]);	
		}
		else
		{
			printf("Invalid M or N! ");
		}
	}
	else
	{
		printf("Invalid Entry!");
	}
}
