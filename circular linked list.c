#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void create(){
	struct node *first=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	struct node *fourth=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d%d%d%d",&first->data,&second->data,&third->data,&fourth->data);
	head=first;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=head;
}
void display(){
	struct node *temp=head;
	if(head==NULL){
		printf("list is empty:\n");
		return ;
	}
	do{
		printf("%d->",temp->data);
		temp=temp->next;
	}while(temp!=head);
	printf("(back to head)\n");
}
void insert_at_beginning(){
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	printf("enter data:\n");
	scanf("%d",&n1->data);
	if(head==NULL){
		head=n1;
		n1->next=head;
	}
	else{
		temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		n1->next=head;
		temp->next=n1;
		head=n1;
	}
}
void insert_at_end(){
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	printf("enter data:\n");
	scanf("%d",&n1->data);
	if(head==NULL){
		head=n1;
		n1->next=head;
	}
	else{
		temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=n1;
		n1->next=head;
	}
}
void insert_at_any_position(){
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	struct node *temp=head;
	int pos,i;
	printf("enter data:\n");
	scanf("%d",&n1->data);
	printf("enter position:\n");
	scanf("%d",&pos);
	if(pos==1){
		insert_at_beginning();
		return;
	}
	for(i=1;i<=pos-1;i++){
		temp=temp->next;
		if(temp->next==head){
			printf("invalid position");
			return;
		}
	}
	n1->next=temp->next;
	temp->next=n1;
}
void deletion_at_begin(){
	struct node *temp=head,*last;
	if(head==NULL){
		printf("list is empty\n");
	}
	else if(head->next==head){
		free(head);
		head==NULL;
	}
	else{
		last=head;
		while(last->next!=head){
			last=last->next;
		}
		head=head->next;
		last->next=head;
		free(temp);
	}
}
void deletion_at_end(){
	struct node *temp=head,*prev;
	if(head==NULL){
		printf("list is empty\n");
	}
	else if(head->next==head){
		free(head);
		head=NULL;
	}
	else{
		while(temp->next!=head){
			prev=temp;
			temp=temp->next;
		}
		prev->next=head;
		free(temp);
	}
}
void deletion_at_any_position(){
	struct node *temp=head,*nextnode;
	int pos,i;
	printf("enter position:\n");
	scanf("%d",&pos);
	if(head==NULL){
		printf("list is empty\n");
		return;
	}
	if(pos==1){
		deletion_at_begin();
		return;
	}
	for(i=1;i<pos-1;i++){
		temp=temp->next;
		if(temp->next==head)
		{
			printf("invalid position\n");
			return;
		}
	}
	nextnode=temp->next;
	if(nextnode->next==head){
		temp->next=head;
	}
	else{
		temp->next=nextnode->next;
	}
	free(nextnode);
}
int main(){
	int choice;
	while(1){
		printf("\n1.Create\n2.Display\n3.Insert Beginning\n4.Insert End\n5.Insert Position\n6.Delete Beginning\n7.Delete End\n8.Delete Position\n9.Exit\n");
		printf("enter choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create();break;
			case 2: display();break;
			case 3: insert_at_beginning();break;
			case 4: insert_at_end();break;
			case 5: insert_at_any_position(); break;
            case 6: deletion_at_begin(); break;
            case 7: deletion_at_end(); break;
            case 8: deletion_at_any_position(); break;
            case 9: exit(0);
            default: printf("Invalid choice\n");

		}
	}
}
