// Basic operations on an array : Sachin yaduvanshi

#include<stdio.h>
void beginsert();
void lastinsert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void search();
int main()
{
    int choice = 0;
    while (choice != 8)
    {
        printf("\n\n🔰🔰Choose an option🔰🔰\n");
        printf("1.Insert at beginning\n2.Insert at last\n3.Insert at any location\n4.Delete from beginning\n5.Delete from last\n6.Delete from any location\n7.Search\n8.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: beginsert(); break;
        case 2: lastinsert(); break;
        case 3: random_insert();  break;
        case 4: begin_delete();  break;
        case 5:  last_delete();  break;
        case 6:  random_delete(); break;
        case 7: search();  break;
        case 8: printf("Exiting...\n"); break;
        default: printf("\nInvalid choice!");
        }
    }
    return 0;
}
void beginsert()
{
	int n, i, item;
	int arr[100];
	printf("Enter the size of an array= ");
	scanf("%d", &n);
	printf("Enter the elements= ");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter item you want to insert= ");
	scanf("%d", &item);
	n++;
	for (i = n; i > 1; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[1] = item;
	printf("\nResultant array elements= ");
	for (i = 1; i <= n; i++)
	{
		printf(" %d", arr[i]);
	}
}
void lastinsert()
{
	int n, i, item;
	int arr[100];
	printf("Enter the size of an array= ");
	scanf("%d", &n);
	printf("Enter the elements= ");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter item you want to insert= ");
	scanf("%d", &item);
	n++;
	n=n+1;
	arr[n-1] = item;
	printf("\nResultant array elements= ");
	for (i = 1; i < n; i++)
	{
		printf(" %d", arr[i]);
	}
}
void random_insert()
{
	int n, i, item,pos;
	int arr[100];
	printf("Enter the size of an array= ");
	scanf("%d", &n);
	printf("Enter the elements= ");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter item you want to insert= ");
	scanf("%d", &item);
	printf("Enter the position where you want to insert= ");
	scanf("%d", &pos);
	n++;
	for (i = n; i >=pos; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[pos] = item;
	printf("\nResultant array elements= ");
	for (i = 1; i <= n; i++)
	{
		printf(" %d", arr[i]);
	}
}
void random_delete()
{
	int n, i,pos;
	int arr[100];
	printf("Enter the size of an array= ");
	scanf("%d", &n);
	printf("Enter the elements= ");
	for (i = 0; i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter position you want to delete= ");
	scanf("%d", &pos);
	for (i = pos-1; i<n+1; i++)
	{
		arr[i] = arr[i +1];
	}
	printf("\nResultant array elements= ");
	for (i = 0; i <n-1; i++)
	{
		printf(" %d", arr[i]);
	}
}
void begin_delete()
{
	int n, i;
	int arr[100];
	printf("Enter the size of an array= ");
	scanf("%d", &n);
	printf("Enter the elements= ");
	for (i = 0; i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i<n; i++)
	{
		arr[i] = arr[i +1];
	}
	printf("\nResultant array elements= ");
	for (i = 0; i <n-1; i++)
	{
		printf(" %d", arr[i]);
	}
}
void last_delete()
{
	int n, i;
	int arr[100];
	printf("Enter the size of an array= ");
	scanf("%d", &n);
	printf("Enter the elements= ");
	for (i = 0; i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf ("\nResultant array elements= ");
	for (i=0; i<n-1; i++)
	{
		printf (" %d", arr[i]);
	}
}
void search()
{
	int arr[100], n, i, s;
	printf ("Enter the size of an array= ");
	scanf ("%d", &n);
	printf ("Enter the elements= ");
	for (i=0;i<=n-1; i++)
	{
		scanf ("%d", &arr[i]);
	}
	printf (" Enter the element what you want to search=  ");
	scanf ("%d", &s);
	for (i=0; i<n; i++)
	{
		if (s==arr[i]){
		printf ("Element found at location= %d", i+1);  
		return; }
	}
	 printf ("Element does not found!");
	
}