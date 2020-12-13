/* Implement a �Delete Front� function to delete the first (front) element of the Linked List.(Check Underflow) */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);
Node* delete_front(Node *temp);

int main()
{
    Node *head = NULL;

    head = create_list();
    print_list(head);

    head = delete_front(head);
    print_list(head);

    return 0;
}
Node* create_list()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = d;

    d->value = 40;
    d->next = NULL;

    return a;
}

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

Node* delete_front(Node *temp)
{
    if(temp){
        Node *new_head = NULL;
    new_head = temp->next;
    free(temp);
    return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
}
