/* Implement a "Clear" function to delete the all the element of the Linked List. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);
Node* clear(Node *temp);

int main()
{
    Node *head = NULL;

    head = create_list();
    print_list(head);

    if(clear(head)==NULL)
        printf("Clear List\n");

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

Node* clear(Node *temp)
{
    Node *to_delete;
    while(temp)
        {
            to_delete = temp;
            temp = temp->next;
            free(to_delete);
        }
    return NULL;
}
