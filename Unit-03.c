#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} Node;

Node *newNode() {
    Node *p;
    p = (Node *) malloc(sizeof (Node));
    p->next = NULL;
    p->prev = NULL;
    return p;
}

int main() {
    Node *first = newNode();
    first->data = 3;
    Node *second = newNode();
    second->data = 5;

    first->next = second;
    second->prev = first;

    first->prev = NULL;
    second->next = NULL;

    return 0;
}