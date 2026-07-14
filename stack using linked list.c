#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data:\n");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}
void pop(){
	struct node *temp;
	if(top==NULL){
		printf("stack is empty:\n");
	}
	else{
		temp=top;
		printf("deleted element:%d\n",top->data);
		top=top->next;
		free(temp);
	}
}
void peek(){
	if(top==NULL){
		printf("stack is empty:\n");
	}
	else{
		printf("top element:%d\n",top->data);
	}
}
void display(){
	struct node *temp=top;
	if(top==NULL){
		printf("stack is empty:\n");
	}
	else{
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}
int main(){
	int choice;
	while(1)
	{
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();break;
			case 2:
				pop();break;
			case 3:
				peek();break;
			case 4:
				display();break;
			case 5:
				exit(0);
			default:
				printf("invalid choice");
		}
	}
}
