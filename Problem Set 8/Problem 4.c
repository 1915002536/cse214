/* Implement a �Delete At� function to delete the nth element of the Linked List. Take input �n� from user.
(Check Underflow and index out of range) (Let, for the first element n = 1) */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

Node* create_list();
void print_list(Node *temp);
Node* delete_at(Node *temp, int pos);

int main()
{
    int n;
    Node *head = NULL;

    head = create_list();
    print_list(head);
    scanf("%d",&n);
    head = delete_at(head, n);
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

Node* delete_at(Node *temp, int pos)
{
    while(temp)
    {
        if(pos>4 || pos<1)
        {
            printf("Index out of range");
            return NULL;
        }
        else
        {
            if(pos==1)
            {
                Node *new_head = NULL;
                new_head = temp->next;
                free(temp);
                return new_head;
            }
            else
            {
                Node *head = temp;
                Node *prev, *next;
                int i=1;
                while(i<pos)
                {
                    prev = temp;
                    temp = temp->next;
                    i++;
                }
                prev->next = temp->next;
                free(temp) ;
                return head;
            }
        }
    }
    printf("Underflow Linked List\n");
    return NULL;
}
