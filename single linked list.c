#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void create();
void insert_at_beginning();
void insert_at_end();
void insert_at_any_position();
void delete_at_beginning();
void delete_at_end();
void delete_at_any_position();
int main(){
	int choice;
	printf("enter choice:\ncreate:1\ninsert_at_beginning:2\ninsert_at_end:3\ninsert_at_any_position:4\ndelete_at_beginning:5\ndelete_at_end:6\ndelete_at_any_position:7\ndisplay:8\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			create();
			break;
		case 2:
			insert_at_beginning();
			break;
		case 3:
			insert_at_end();
			break;
		case 4:
			insert_at_any_position();
			break;
		case 5:
			delete_at_beginning();
			break;
		case 6:
			delete_at_end();
			break;
		case 7:
			delete_at_any_position();
			break;
		case 8:
			display();
			break;
		default:
			printf("invalid choice");
			break;
	}
}
void create(){
	struct node *first=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	struct node *fourth=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d%d%d%d\n",&first->data,&second->data,&third->data,&fourth->data);
	head=first;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=NULL;
	display();
}
void insert_at_beginning(){
	create();
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	printf("enter data for newnode\n");
	scanf("%d",&n1->data);
	n1->next=head;
	head=n1;
	display();
}
void insert_at_end(){
	create();
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	printf("enter data for newnode\n");
	scanf("%d",&n1->data);
	n1->next=NULL;
	struct node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n1;
	display();
}
void insert_at_any_position(){
	create();
	struct node *n1=(struct node*)malloc(sizeof(struct node));
	printf("enter data for new node\n");
	scanf("%d",&n1->data);
	struct node *temp=head;
	int position,i;
	printf("enter position");
	scanf("%d",&position);
	for(i=1;i<position;i++){
		if(temp->next!=NULL){
			temp=temp->next;
		}
	}
	n1->next=temp->next;
	temp->next=n1;
	display();
}
void delete_at_beginning(){
	create();
	struct node *temp=head;
	if(head==NULL)
		printf("list is empty\n");
	else if(head->next==NULL)
		free(head);
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	display();
}
void delete_at_end(){
	create();
	struct node *temp=head;
	struct node *prev;
	if(head==NULL)
		printf("list is empty\n");
	else if(head->next==NULL)
		free(head);
	else{
		while(temp->next!=NULL){
			prev=temp;
			temp=temp->next;
		}
		free(temp);
		prev->next=NULL;
	}
	display();
}
void delete_at_any_position()
{
	create();
	struct node *temp,*nextnode;
	int loc,i=1;
	printf("Enter the location of node:\n");
	scanf("%d",&loc);
	temp=head;
	while(i<loc-1)
	{
		temp=temp->next;
		i=i+1;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
	display();
}
void display(){
	struct node *temp1=head;
	while(temp1!=NULL){
		printf("%d...>",temp1->data);
		temp1=temp1->next;
	}
}





