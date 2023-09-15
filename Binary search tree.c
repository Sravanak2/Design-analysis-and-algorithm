#include<stdio.h>
int main(){
	int i,j,num,arr[10],freq[30];
	printf("Enter No of Search Keys: ");
	scanf("%d",&num);
	printf("Enter Search Keys: ");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter Frequencies: ");
	for(i=0;i<num;i++){
		scanf("%d",&freq[i]);
	}
	for(i=0;i<num;i++){
		for(j=0;j<i;j++){
			if(freq[i]>freq[j]){
				int temp = freq[i];
				freq[i] = freq[j];
				freq[j] = temp;
			}
		}
	}int sum = 0;
	for(i=0;i<num;i++){
		sum += freq[i]*(i+1);}
printf("Minimum Cost:%d",sum);
}
