#include <iostream>

typedef struct node {
    int num;
    struct node *next;
} Node;

typedef struct linked_list {
    int length;
    Node *head;
    Node *last;
} NumList;

Node *newNode() {
    Node *p;
    p = (Node *) malloc(sizeof (Node));
    p->next = NULL;
    return p;
}

void initList (NumList *n) {
    n->head = NULL;
    n->last = NULL;
    n->length = 0;
}

int appendHeadList(NumList *s, Node *p) {
    if (s->head == NULL){
        s->head = p;
    } else {
        p->next = s->head;
        s->head = p;
    }

    s->length++;
        
}

void insertLast(NumList *s, Node *p) {
    if (s->head == NULL) {
        s->head = p;
        s->last = p;
    } else {
        s->last->next = p;
        s->last = p;
    }
    s->length++;
}

void printNumList(NumList L) {
    Node *pCurr = L.head;

    while (pCurr != NULL) {
        printf("Num: %d\n", pCurr->num);
        pCurr = pCurr->next;
    }

}

void main() {
    NumList NL;
    Node *N;
    initList(&NL);
    for (int i = 0; i < 3; ++i){
        N = newNode();
        N->num = i;
        appendHeadList(&NL, N);
    }

    printNumList(NL);
    return 0;
}
