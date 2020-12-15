/* Implement an "Insert After" function to insert an element after a node with value 'key'
of the Linked List. Take input 'key' and new node value from user. (Check index out of range) */

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
} Node;
Node* create_list();
void print_list(Node *temp);
Node* insert_after(Node *temp, int key, int value);
int main()
{
    int key;
    Node *head = NULL;
    head = create_list();
    print_list(head);
    scanf("%d",&key);
    head = insert_after(head, key, 50);
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
void print_list(Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
Node* insert_after(Node *temp, int key, int value)
{
    Node *head = temp;
    int i = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            Node *new_node = (Node*) malloc(sizeof (Node) );
            new_node->value = value;
            new_node->next = temp->next;
            temp->next = new_node;
            i++;
            return head;
        }
        temp = temp->next;
    }
    if(i<1 || i>4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    return head;
}
