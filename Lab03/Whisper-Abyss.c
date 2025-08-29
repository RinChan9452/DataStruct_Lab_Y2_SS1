#include <stdio.h>
#include <stdlib.h>

typedef struct node { 
    int data;
    struct node *next;
}Node;

typedef struct linked_list { 
    int length;
    Node *head;
    Node *last;
    
} NumList;

Node *newNode(int value) {
    Node *p;
    p = (Node *) malloc(sizeof(Node));
    p->data = value;
    p->next = NULL;
    return p;
}

void initList(NumList *L) {
    L->length = 0;
    L->head = NULL;
    L->last = NULL;
}

void insertLast(NumList *L, int value) {
    Node *n = newNode(value);
    if (!L->head){
        L->head = L->last = n;
    } else { 
        L->last->next = n; 
        L->last = n; 
    }
    L->length++;
}

void cycle(NumList *L) {
    if (L->last) L->last->next = L->head;
}

void terminateAdventure(NumList *L, int k) {
    int l = L->length;
    if (L->length <= 0 || k <= 0) return;

    Node *prev = L->last; 
    Node *cur = L->head;

    if (k == 1) {
        for (int i = 0; i < l; ++i) {
            printf("%d%c", cur->data, (i + 1 < l) ? ' ' : '\n');
            Node *nx = cur->next;
            free(cur);
            cur = nx;
        }
        L->head = L->last = NULL;
        L->length = 0;
        return;
    }

    while (l > 0) {
        long long step = (k - 1) % l;     
        while (step--) { 
            prev = cur; cur = cur->next; 
        }

        printf("%d%c", cur->data, (l > 1) ? ' ' : '\n');

        prev->next = cur->next;            
        Node *del = cur;
        cur = cur->next;                  
        free(del);
        --l;
    }

    L->head = L->last = NULL;
    L->length = 0;
}

int main() {
    int total;
    scanf("%d", &total);

    int terminate;
    scanf("%d", &terminate);

    NumList list;
    initList(&list);

    for (int i = 1; i <= total; ++i) {
        insertLast(&list, i);
    }

    cycle(&list);
    terminateAdventure(&list, terminate);

    return 0;
}