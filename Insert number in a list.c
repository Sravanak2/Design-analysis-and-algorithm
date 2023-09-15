#include<stdio.h>
int main(){
	int i,j,n,a[30],insert,place;
	n = 5;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter Array Elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter Element to be Inserted: ");
	scanf("%d",&insert);
	printf("Enter where to be Inserted: (1 - First, 2 - Middle , 3 - Last)");
	scanf("%d",&place);
	if(place>=1 && place<=3){
		if(place ==1){
			printf("%d",insert);
			for(i=0;i<n;i++){
				printf("%d ",a[i]);
			}
		}
		else if(place == 2){
			int mid = n/2;
			for(i=0;i<mid;i++){
				printf("%d ",a[i]);
			}printf("%d ",insert);
			for(i=mid;i<n;i++){
				printf("%d ",a[i]);
			}
		}
		else if(place ==3){
			for(i=0;i<n;i++){
				printf("%d ",a[i]);
			}printf("%d ",insert);
		}
	}
	else{
		printf("Position Not Available in list!");
	}
}
