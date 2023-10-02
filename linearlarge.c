#include <stdio.h>

void linlarge(int a[],int num){
	int fl=a[0],sl=a[0],temp;
	for(int i=0;i<num;i++){
		if(fl<a[i])
		{
		sl=fl;
		fl=a[i];
		}
		else if(a[i] > sl && a[i] < fl)
		{
			sl=a[i];
		}
	}
	printf("first largest : %d",fl);
	printf("second largest : %d",sl);
		
		
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
	linlarge(arr,n);

}
