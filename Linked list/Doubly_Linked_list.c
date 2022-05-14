#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node {
    int data;
    struct node *next;
    struct node *prev;
};
{
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

one->data = 1;
two->data = 2;
three->data = 3;
one->next = two;
one->prev = NULL;

two->next = three;
two->prev = one;

three->next = NULL;
three->prev = two;
head = one;
   voidinsertFront();
} }
void insertFront(struct Node** head, int data) {

    // allocate memory for newNode
    struct Node* newNode = new Node;

    // assign data to newNode
    newNode->data = data;

    // point next of newNode to the first node of the doubly linked list
    newNode->next = (*head);

    // point prev to NULL
    newNode->prev = NULL;

    // point previous of the first node (now first node is the second node) to newNode
    if ((*head) != NULL)
        (*head)->prev = newNode;

    // head points to newNode
    (*head) = newNode;
}

