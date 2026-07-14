//self referential structure with single node
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *first,*second;
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	first->data=30;
	first->next=second;
	second->data=200;
	second->next=NULL;
	printf("data1=%d\ndata2=%d",first->data,second->data);
	return 0;
}
