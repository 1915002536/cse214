/* Define a �Back� function to display the last element of the Linked List. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

Node* create_list();
void empty_list(Node *temp);
void print_list(Node *temp);

int main()
{
    Node *head = NULL;

    head = create_list();
    printf("%d\n", back(head));

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

int back(Node *temp){
    if(temp!=NULL){
        while(temp->next){
            temp=temp->next;
        }
        return temp->value;
    }
}
