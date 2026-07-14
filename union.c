//union
#include<stdio.h>
union student{
	int roll;
	float marks;
};
int main(){
	union student data;
	data.roll=103;
	printf("roll number=%d\n",data.roll);
	data.marks=91.5;
	printf("marks=%.2f",data.marks);
}
