#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct queue {
    struct node* front, * rear;
};
void enqueue(struct queue* q, int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = temp;
        printf("%d Enqueued into the queue\n", data);
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
    printf("%d Enqueued into the queue\n", data);
}
int dequeue(struct queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty!!\n");
        return -1;
    }
    struct node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL; 
    }
    free(temp);
    printf("%d Dequeued from the queue\n", data);
    return data;
}
int peek(struct queue* q) {
    if (q->front == NULL) {
        printf("Queue is Empty!!\n");
        return -1;
    }
    printf("Top element is: %d\n", q->front->data);
    return q->front->data;
}
int isempty(struct queue* q) {
    if (q->front == NULL) {
        printf("Queue is Empty!!\n");
        return 1; 
    }
    return 0;
}
void display(struct queue* q) {
    struct node* temp = q->front;
    if (temp == NULL) {
        printf("Queue is Empty!!\n");
        return;
    }
    printf("Queue elements are: ");
    while (temp) {
        printf(" %d", temp->data);
        temp = temp->next;
    }
}
int main() {
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    int choice, value;
    while (1) {
        printf("\n\n...MAIN MENU...\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter value to Enqueue: ");
            scanf("%d", &value);
            enqueue(q, value);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            peek(q);
            break;
        case 4:
            display(q);
            break;
        case 5:
            printf("Exiting program...\n");
            free(q);
            return 0;
        default:
            printf("Invalid choice!!\n");
        }
    }
return 0;
}
