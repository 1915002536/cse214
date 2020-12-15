/* Define a function to merge two Linked List. Display all the list before and after merging. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

Node* create_list();
void print_list(Node *temp);
Node* copy_list_recursive(Node *copy);
Node* merge_list(Node *list1, Node *list2);

int main()
{
    Node *head = NULL;
    Node *list = NULL;
    Node *list1 = NULL;

    head = create_list();
    print_list(head);

    list = copy_list_recursive(head);
    print_list(list);

    list1 = merge_list(head, list);
    print_list(list1);
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

Node* copy_list_recursive(Node *copy)
{
    if(copy == NULL)
        return NULL;
    Node *temp = (Node*) malloc(sizeof (Node));
    temp->value = copy->value;
    temp->next = copy_list_recursive(copy->next) ;

    return temp;
}

Node* merge_list(Node *list1, Node *list2)
{
    Node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
}
