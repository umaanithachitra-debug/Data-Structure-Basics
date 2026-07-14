#include<stdio.h>
#define MAX 5
int stack[MAX],top=-1,i;
void push(){
	if(top==MAX-1)
		printf("stack overflow\n");
	else{
		int value;
		printf("enter value to be insert\n");
		scanf("%d",&value);
		stack[++top]=value;
		printf("%d pushed to stack\n",value);
	}
}
void pop(){
	if(top==-1)
		printf("stack underflow\n");
	else{
		printf("%d popped from stack",stack[top--]);
	}
}
void peek(){
	if(top==-1)
		printf("stack is empty\n");
	else
		printf("top element is:%d\n",stack[top]);
}
void display(){
	if(top==-1)
		printf("stack is empty\n");
	else{
		printf("stack elements are:");
		for(i=0;i<=top;i++){
			printf("%d  ",stack[i]);
		}
		printf("\n");
	}
}
int main(){
	int choice;
	while(1){
		printf("\n stack operations:\n");
		printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("exiting.....\n");
				return 0;
			default:
				printf("invalid choice!try again!");
		}
	}
}
