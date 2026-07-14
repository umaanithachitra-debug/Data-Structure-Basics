//pass structure by reference
#include<stdio.h>
struct student {
	int roll;
	float marks;
};
void update(struct student *s){
	s->marks=90.0;
	s->roll=103;
}
int main()
{
	struct student s1;
	update(&s1);
	printf("marks=%.2f\n",s1.marks);
	printf("roll=%d\n",s1.roll);
}

