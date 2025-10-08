#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;

};


void TraverseLL(struct Node *ptr) {
    while (ptr != NULL) {

        printf("Elements : %d\n", ptr->data);
        ptr = ptr -> next;

    }
}

struct Node * insertAtFirst(struct Node * head, int data) {
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

struct Node * insertAtEnd(struct Node * head, int data) {
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr  -> data = data;
    struct Node * p = head;

    while (p -> next != NULL) {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL; 
    return head;
}

struct Node * insertAtIndex(struct Node * head, int data, int index) {
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while ( i != index - 1) {
        p = p -> next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
}

int main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;



    // Allocate memory for node nodes int the Linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

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
    fourth -> next = NULL;

    // TraverseLL(head);
    // head = insertAtFirst(head, 3);
    //head = insertAtIndex(head, 50, 1);
    head = insertAtEnd(head, 10);
    TraverseLL(head);

    return 0;
     
}
