//seperate nested structure
#include<stdio.h>
struct address{
	char city[10];
	int pincode;
};
struct employee{
	char name[10];
	struct address addr;
};
int main()
{
	struct employee emp;
	printf("employee name");
	scanf("%s",&emp.name);
	printf("city name");
	scanf("%s",&emp.addr.city);
	printf("enter pincode");
	scanf("%d",&emp.addr.pincode);
	printf("name=%s\n",emp.name);
	printf("city=%s\n",emp.addr.city);
	printf("pincode=%d\n",emp.addr.pincode);
	return 0;
}
