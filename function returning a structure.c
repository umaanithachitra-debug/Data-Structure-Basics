//function returning a structure
#include<stdio.h>
struct student {
	int roll;
	float marks;
};
struct student getdata(){
	struct student s={102,90.88};
	return s;
}
int main(){
	struct student s1;
	s1=getdata();
	printf("Roll=%d\n",s1.roll);
	printf("Marks=%.2f",s1.marks);
}


