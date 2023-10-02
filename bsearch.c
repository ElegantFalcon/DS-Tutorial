#include <stdio.h>

void bisearch(int a[],int search,int num){
	int low=0,high=num,mid;
	while(low<=high)
	{	
		mid = (low+high)/2;
		if(search==a[mid])
		{	
			printf("Search is found");
			break;
		}
		else if (search>a[mid])
		low = mid+1;
		else if(search<a[mid])
		high=mid-1;
	}
	if(low>high)
	printf("failed!!!!!!");
}

int main(){
	int n,s; 
	printf("Enter total number: ");
	scanf("%d",&n); 
	int arr[n];
	for(int i=0; i<n; i++){
	printf("Enter number: ");
	scanf("%d",&arr[i]); 
	} 
	printf("Enter search item: ");
	scanf("%d",&s); 
	bisearch(arr,s,n-1);
	
}
