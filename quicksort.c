//quick sort
#include<stdio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);
int main(){
	int a[50],n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter %d elements to be sorted:",n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("array after sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
void quicksort(int a[],int low,int high){
	if(low<=high){
		int j=partition(a,low,high);
		quicksort(a,low,j-1);//move left
		quicksort(a,j+1,high);//move right
	}
}
int partition(int a[],int low,int high){
	int pivot=a[low];
	int i=low+1;
	int j=high;
	int temp;
	while(i<=j){
		while(i<=high&&a[i]<pivot){
			i++;
		}
		while(a[j]>pivot){
			j--;
		}
		if(i<j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}
