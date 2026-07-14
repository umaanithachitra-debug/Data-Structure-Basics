//copy one structure to another
#include<stdio.h>
struct student{
	
	char name[10];
	int roll;
	char gender;
	
};
int main(){
	struct student s1={"anitha",103,'f'},s2;
	s2=s1;
	printf("name=%s\nroll no=%d\ngender=%c",s2.name,s2.roll,s2.gender);
}
