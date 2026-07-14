//embedded structure
#include<stdio.h>
struct student{
	int roll;
	char name[10];
	struct marks{
		int m1,m2,m3;
	}m;
};
int main(){
	struct student s;
	printf("enter roll number");
	scanf("%d",&s.roll);
	printf("enter name");
	scanf("%s",s.name);
	printf("enter marks");
	scanf("%d%d%d",&s.m.m1,&s.m.m2,&s.m.m3);
	printf("student details\n");
	printf("roll number=%d\n",s.roll);
	printf("name=%s\n",s.name);
	printf("marks=%d %d %d",s.m.m1,s.m.m2,s.m.m3);
}
