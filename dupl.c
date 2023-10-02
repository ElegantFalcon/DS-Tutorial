#include <stdio.h>

void duplicate(int a[],int num){
	int count;
	for(int i=0;i<num;i++){
	count = 0;
		for(int j=0;j<num;j++){
			if(a[i]==a[j])
			count++;			    
		}
		if(count>1)
		printf("Duplicate element : %d \n Count : %d \n",a[i],count);
	
	}		
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
	duplicate(arr,n);

}
