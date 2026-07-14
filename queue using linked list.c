#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data:\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(front==NULL&&rear==NULL){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(){
	struct node *temp;
	if(front==NULL){printf("queue is empty\n");
	}
	else{
		temp=front;
		printf("deleted element:%d\n",front->data);
		front=front->next;
		if(front==NULL){
			rear=NULL;
		}
		free(temp);
	}
}
void peek(){
	if(front==NULL){
		printf("queue is empty:\n");
	}
	else{
		printf("front element:%d\n",front->data);
	}
}
void display(){
	struct node *temp=front;
	if(front==NULL){
		printf("queue is empty:\n");
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
	while(1){
		printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
		printf("enter choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				enqueue();break;
			case 2:
				dequeue();break;
			case 3:
				peek();
				break;
			case 4:
				display();break;
			default:
				printf("invalid choice:\n");
		}
	}
}

