//  Enqueue, Dequeue and Display in queue

#include<stdio.h>
#define max_size 3
int queue[max_size];
int front=-1, rear =-1;
void enqueue(int item);
void dequeue();
void display();

int main()
{
	int choice, item;
	printf (" 🔰🔰MAIN MENU🔰🔰 \n");
	printf (" 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
	while (1)
	{
		printf ("\nEnter your choice : ");
		scanf ("%d", &choice);
		switch (choice)
		{
case 1:

	if (rear==max_size-1)
	{
		printf ("OVERFLOW & EXIT");
	}
	else 
	{
		printf (" Enter the element : ");
		scanf ("%d", &item);
		if (front==-1)
		{
			front=rear=0;
		}
		else rear++;
		queue[rear]= item;
		printf ("Item inserted.. %d", item);
	}
break;
case 2:
	if (front==-1)
	{
		printf ("UNDERFLOW & EXIT");
	}
	else 
	{
		int item= queue[front];
		if (front==rear)
		{
			front = rear = -1;
		}
		else front++;
		printf  ("Item deleted.. %d", item);
	}
	break;
case 3 :
	if (front==-1)
	{
		printf ("Queue is empty !!");
	}
	else
	{
		printf ("Queue elements are : ");
		for (int i=front; i<=rear; i++)
		{
			printf (" %d", queue[i]);
		}
	}
	break;
case 4: return 0;
			default: printf ("Invalid choice !!");
		}
	}
	return 0;
}
