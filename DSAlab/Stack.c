// Push, Pop & Display in Stack : Sachin yaduvanshi

#include <stdio.h>
#define max_size 5
int stack[max_size];
int top= -1;
void push(int item);
void pop();
void Display();
int main()
{
	int choice, item;
	printf (" 🔰🔰MAIN MENU🔰🔰 \n");
	printf (" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
	while (1)
	{
		printf ("\nEnter your choice: ");
		scanf ("%d", &choice);
		
		switch (choice)
		{
	   case 1: 
			printf ("Enter value to push: ");
			scanf ("%d", &item);
			push (item);
			break;
  	case 2: 
         	pop();
         	break;
  	case 3:
         	Display();
         	break;
      case 4:
             return 0;
      default: 
             printf ("Invalid choice !!");
		}
	}
}
void push(int item)
{
	if (top==max_size -1)
	{
		printf("OVERFLOW & EXIT");
	}
	else
	{
		stack [++top] = item;
		printf (" %d Item inserted.\n", item);
	}
}
void pop()
{
	if (top== -1)
	{
		printf ("UNDERFLOW & EXIT\n");
	}
	else
	{
		int item = stack[top--];
		printf (" %d Item deleted.", item);
	}
}
void Display()
{
	if (top== -1)
	{
		printf ("\nStack is empty !!\n");
	}
	else 
	{
		printf ("Stack elements are : ");
		for (int i=0; i<=top; i++)
		{
			printf (" %d", stack[i]);
		}
	}
}
