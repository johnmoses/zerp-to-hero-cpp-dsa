#include <stdio.h>

struct node {
    int info;
    struct node *link;
};
struct node *start = NULL;

struct node *createnode() {
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    return (t);
}

void insert() {
    struct node *p;
    p = createnode();
    printf("\nenter the numbe to insert");
    scanf("%d", &p->info);
    p->link = NULL;
    if (start == NULL) {
        start = p;
    } else {
        p->link = start;
        start = p;
    }
}

void deletion() {
    struct node *t;
    if (start == NULL) {
        printf("\nlist is empty");
    } else {
        struct node *p;
        p = start;
        start = start->link;
        free(p);
    }
}

void viewlist() {
    struct node *p;
    if (start == NULL) {
        printf("\nlist is empty");
    } else {
        p = start;
        while (p != NULL) {
            printf("%d", p->info);
            p = p->link;
        }
    }
}

int main() {
    printf("Singly linked list\n");

    return 0;
}