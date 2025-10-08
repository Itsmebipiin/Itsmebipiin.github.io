#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;

};

void TraverseLL(struct Node *ptr) {
    while (ptr != NULL) {

        printf("\nElements : %d\n", ptr->data);
        ptr = ptr -> next;

    }
}

int main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;



    // Allocate memory for node nodes int the Linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node));

    // Link First and scond Nodes
    head -> data = 7;
    head -> next = second;

    // Link second and third
    second -> data = 11;
    second -> next = third;

    // Link third and fourth
    third -> data = 66;
    third -> next = fourth;

    // terminate the Linked list at the third node
    fourth -> data = 45;
    fourth -> next = fifth;
    fifth -> data = 49;
    fifth -> next = NULL;

    TraverseLL(head);

    return 0;
     
}