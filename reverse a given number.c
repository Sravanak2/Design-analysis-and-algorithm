#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,flag=0;
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		{
		flag += 1;
		}
	else
	{
		flag+=0;
	}
	}
	if(flag==0)
	{
		for(i=strlen(a)-1;i>=0;i--)
		{
			printf("%c",a[i]);
		}
	}
	else
	{
		printf("Invalid Input!");
	}
}
