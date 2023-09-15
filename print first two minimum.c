#include<stdio.h>
int main(){
	int arr[30], i,j, num,temp;
	printf("Enter No of Elements: ");
	scanf("%d",&num);
	printf("\nEnter Elements of Array : ");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++){
		for(j=0;j<i;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

		printf("(%d,%d)",arr[0],arr[1]);
	
}
