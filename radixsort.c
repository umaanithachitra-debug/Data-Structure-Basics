//radix sorting or bucket sort
#include<stdio.h>
//to get max element
int getmax(int a[],int n){
	int max=a[0],i;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void radixsort(int a[],int n){
	int big,nod=0,steps,count[10],i,j,k,bucket[10][n],loc,div=1;
	big=getmax(a,n);
	while(big>0){
		nod++; //to find no of digits in biggest number
		big=big/10;
	}
	for(steps=1;steps<=nod;steps++){
		for(j=0;j<10;j++){
			count[j]=0; //to make all positions zero
		}
	for(i=0;i<n;i++){
		loc=(a[i]/div)%10;
		bucket[loc][count[loc]++]=a[i];  //to fill the places
	}
	k=0;
	for(j=0;j<10;j++){
		for(i=0;i<count[j];i++){
			a[k++]=bucket[j][i]; //to remove the elements
		}
	}	
	div=div*10;
	}
}
void printarray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main(){
	int a[100],i,n;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("before sorting\n");
	printarray(a,n);
	radixsort(a,n);
	printf("after sorting\n");
	printarray(a,n);
	return 0;
}
