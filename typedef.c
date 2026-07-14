//type def
#include<stdio.h>
typedef int number;
int main(){
	number num1,num2,sum;
	printf("enter first,second numbers");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("%d",sum);
	return 0;
}
