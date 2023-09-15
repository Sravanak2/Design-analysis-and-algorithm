#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	printf("Enter the Text / Number: ");
	scanf("%s",&a);
	int i,l=strlen(a),n=0;
	for(i =l-1;i>=0;i--)
	{
		b[n]=a[i];
		n +=1;
	}
	if(strcmp(a,b)==0)
	{
		printf("\nGiven value is Palindrome");
	}
	else
	{
		printf("\nGiven value is Not a Palindrome");
	}
}
