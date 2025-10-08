// Basic operations on stack using linked list...

#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*top=NULL;
void push(int value)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("OVERFLOW & EXIT");
		return;
	}
	temp->data=value;
	temp->next=top;
	top=temp;
	printf("%d Value pushed to stack", value);
}
void pop()
{
	if(top==NULL){
		printf("Underflow & exit...");
	}
	struct node*temp=top;
	printf(" %d Popped from top", temp->data);
	top=top->next;
	free(temp);
}
void display()
{
	if(top==NULL){
		printf("Stack is empty!!");
		return;
	}
	struct node*temp=top;
	printf("Stack elements are: ");
	while(temp!=NULL){
		printf(" %d",temp->data);
		temp=temp->next;
	}
}
int peek()
{
	if(top==NULL){
		printf("Stack is empty!!");
	 return -1; }
	printf("Top element are: %d",top->data);
	return top->data;
}
int isempty()
{
	return top==NULL;
}
int main()
{
	int value,choice;
	while(1)
	{
		printf("\n\n...MAIN MENU...");
		printf("\n1.Push \n2.Pop \n3.Peek \n4.Display \n5.Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter value to push: ");
				scanf("%d", &value);
				push(value);
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
				printf("Program Exiting...");
				return 0;
			default:
				printf("Invalid choice !!!");
		}
	}
return 0;
}
