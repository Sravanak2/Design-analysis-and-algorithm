#include<stdio.h>
int main()
{
	int arr[30],i,j,num,search;
	printf("Enter No of Elements : ");
	scanf("%d",&num);
	int flag = 0;
	int s;
	for(i=0;i<num;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]<arr[j])
			{
			int	temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}printf("Sorted Array: ");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter Search Element: ");
	scanf("%d ",&search);
	for(i=0;i<num;i++)
	{
		if(arr[i]==search)
		{
			flag = 1;
			s = i;	
		}
	}
	if(flag==1)
	{
		printf("Element %d is found at Index %d",search,s);
	}
	else
	{
		printf("-1");
	}	
}
