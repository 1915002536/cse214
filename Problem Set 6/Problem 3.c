/* Define a function to display (only value for each node) the complete
 Linked List and do the same as problem 1. (Don’t use DMA) */


#include<stdio.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_list(Node *temp);

int main()
{
    Node a, b, c;
    Node *head = NULL;

    head = &a;

    a.value = 11;
    a.next = &b;

    b.value = 12;
    b.next = &c;

    c.value = 13;
    c.next = NULL;

    print_list(head);

    return 0;
}
void print_list(Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
}

