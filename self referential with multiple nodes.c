//self referential structure with multiple nodes
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *aadr;
};
int main(){
	struct node *first,*second,*third,*temp;
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	printf("enter first node:");
	scanf("%d",&first->data);
	first->aadr=second;
	printf("enter second node:");
	scanf("%d",&second->data);
	second->aadr=third;
	printf("enter third node:");
	scanf("%d",&third->data);
	third->aadr=NULL;
	temp=first;
	printf("linked list:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->aadr;
	}
	printf("NULL");
	return 0;
}
