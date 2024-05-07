#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next; 
};
struct node*createnode(int data){
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("memory allocation failed\n");
		exit(1);
	}
newnode->data=data;
newnode->next=NULL;

return newnode;
}
struct node*insertattheend(struct node*start){
	struct node*newnode=createnode(0);
	printf("enter data for the new node:");
	scanf("%d",&(newnode->data));
	newnode->next=NULL;
	if(start==NULL){
		//if the list empty,set the new node as the start
		start=newnode;
	}
	else{
		//traverse the list to find the last node and insert the new node at the end
		struct node*temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	printf("node inserted at the end sucessfully");
	return start;
}
struct node*insertatbeginning(struct node*start){
	struct node*newnode=createnode(0);
	printf("enter data for the new node:");
	scanf("%d",&(newnode->data));
	newnode->next=start;
	start=newnode;
	printf("node inserted at beginning sucessfully\n");
	return start;
}
struct node*insertatpositiongiven(struct node*start)
{
	struct node*newnode=createnode(0);
	int position;
	printf("enter data for the new node:");
	scanf("%d",&(newnode->data));
	newnode->next=NULL;
	printf("enter the position to insert(1 to n+1):");
	scanf("%d",&position);
	if(position==1){
		//insert at the beginning
		newnode->next=start;
		start=newnode;
	}
	else{
		//traverse the list to find the position
		struct node*temp=start;
		int i;
		for(i=1;i<position-1 && temp!=NULL;++i){
			temp=temp->next;
		}
		if(temp==NULL){
			printf("invalid position.inserting at the end");
			//insert at the end if the position is invalid
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
		}
		//insert the new node at the specific position
		newnode->next=temp->next;
		temp->next=newnode;
	
	}
	printf("node inserted at the specified position sucessfully");
	return start;
}
void freememory(struct node*start){
	struct node*temp;
	while(start!=NULL){
		temp=start;
		start=start->next;
		free(temp);
	}
}
//function to print the linked list
void printlist(struct node*start)
{
	struct node*temp=start;
	if(temp==NULL)
	{
		printf("the list is empty.");
	}
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	struct node* start=NULL;
	int choice;
	do{
		printf("choose insertion at:\n");
		printf("1.end 2.beginning 3.certain position 4.display 5.exit\n");
		scanf("%d",&choice);
	
	switch(choice){
	
	case 1:
		start=insertattheend(start);
		break;
	case 2:
		start=insertatbeginning(start);
		break;
	case 3:
		start=insertatpositiongiven(start);
		break;
	case 4:
		printlist(start);
		break;
	case 5:
		printf("exiting");
		break;
	default:
		printf("invalid choice.enter again\n");
}
}while(choice!=5);
//free allocated memory
freememory(start);
return 0;
}

