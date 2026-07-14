//BITFIELDS
#include<stdio.h>
struct status{
	unsigned int is_online:1;
	unsigned int is_admin:1;
	unsigned int has_messages:1;
};
int main(){
	struct status user;
	user.is_online=1;
	user.is_admin=0;
	user.has_messages=1;
	printf("user online=%d\n",user.is_online);
	printf("user admin=%d\n",user.is_admin);
	printf("user messages=%d\n",user.has_messages);
	return 0;
}
