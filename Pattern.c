//     1
//    1 2
//   1 2 3
//  1 2 3 4
#include<stdio.h>
int main()
{
	int i,j,k,num = 5,count;
	for(i=0;i<num;i++)
	{
		for(k=num;k>=i;k--)
		{
			printf(" ");
		}
		count = 1;
		for(j=0;j<i;j++)
		{
			printf("%d ",count);
			count+=1;
		}printf("\n");
	}
}
