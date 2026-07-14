//enum(enumeration)
#include<stdio.h>
enum week{mon=1,tue,wed,thu,fri,sat,sun};
int main(){
	int day;
	enum week today;
	scanf("%d",&day);
	today=day;
	printf("%d",today);
	return 0;
}
