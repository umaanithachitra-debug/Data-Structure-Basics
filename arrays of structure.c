//total and average of marks of n students
#include<stdio.h>
struct student
{
	char name[10];
	int m1,m2,m3;
	float total,avg;
};
int main()
{
	int n,i;
	printf("enter number of students");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("enter name,marks of a student");
		scanf("%s%d%d%d",&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
	}
	for(i=0;i<n;i++){
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].total/3.0;
		printf("total=%.2f,average=%.2f \n",s[i].total,s[i].avg);
	}
}
