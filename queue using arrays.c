#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
int queue[SIZE],front=-1,rear=-1,i;
void main(){
	int value,choice;
	while(1){
		printf("\n***MENU***\n");
		printf("1.insertion\n2.deletion\n3.display\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter value to be insert:");
				scanf("%d",&value);
				enQueue(value);
				break;
			case 2:
				deQueue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\n wrong selection!!!try again!!!");
			
	}
}
}
void enQueue(int value){
	
if(rear==SIZE-1){
	printf("queue is full");
	}
else{
	if(front==-1)
		front=0;
	rear++;
	queue[rear]=value;
	printf("insertion success!!!!\n");
}
}
void deQueue(){
	if(front==-1||front>rear)
		printf("queue is empty");
	else{
		printf("deleted:%d\n",queue[front]);
		front++;
		if(front>rear)
			front=rear=-1;
	}
}
void display(){
	if(front==-1)
		printf("queue is empty");
	else{
		printf("queue elements are:");
		for(i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
	}

}
