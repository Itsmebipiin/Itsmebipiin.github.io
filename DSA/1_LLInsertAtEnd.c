#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;

};

void display(struct Node* head) {
    struct Node* temp = head;
    printf("\nLinked list Elements \n");
    while (temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;

    }
    printf("NULL\n");

}

int main () {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode;
    int n, value;


    printf("\nEnter No of nodes : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enetr value for node %d : ", i + 1);
        scanf("%d", &value);

        newNode -> data = value;
        newNode -> next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = head;

        } 
        else {
            temp -> next = newNode;
            temp = newNode;
        }
    }

    display(head);

    return 0;
}
