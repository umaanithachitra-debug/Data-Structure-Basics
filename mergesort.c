//mergesorting
#include<stdio.h>
void divide(int arr[],int l,int r);
void merge(int arr[],int l,int m,int r);
int n;
int main(){
	int arr[10],i;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter %d elements to be sorted:",n);
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	divide(arr,0,n-1);
	printf("array after sorting\n");
	for(i=0;i<n;i++){
		printf("%4d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
void divide(int arr[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
		divide(arr,l,m);
		divide(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
void merge(int arr[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n2;j++)
		R[j]=arr[m+1+j];
	i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
	k++;
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
}
