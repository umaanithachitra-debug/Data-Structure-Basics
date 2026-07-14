//pass structure by value

#include<stdio.h>
struct student{
	int roll;
	float marks;
};
void display(struct student s){
	printf("roll:%d\n",s.roll);
	printf("marks:%.2f\n",s.marks);
}
int main(){
	struct student s1={109,89.9};
	
	display(s1);
	return 0;
}
