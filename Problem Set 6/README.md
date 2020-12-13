# Problem 1
##  A linked list node
    struct node
    {
    int value;
    struct node *next;
    };

##  Declare three variable,Assign value and next address

    struct node a, b, c;
       struct node *head = NULL;

    head = &a;

    a.value = 5;
    a.next = &b;
    
    b.value = 10;
    b.next = &c;

    c.value = 15;
    c.next = NULL;

##  Print the variable address, value and next variable address
    printf("%p \t %d \t %p\n", &a, a.value, a.next);
    printf("\n%p \t %d \t %p\n", &b, b.value, b.next);
    printf("\n%p \t %d \t %p\n", &c, c.value, c.next);
    
    
 # Problem 2
 ## Creating Node
    typedef struct node
    {
       int value;
       struct node *next;
    } Node;
 
 ## Function to print single node of the Linked List 
        void print_node(Node *temp)
    {
        printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
    }

# Problem 3
## Function to display (only value for each node) the complete Linked List
        void print_list(Node *temp)
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->value);
            temp = temp->next;
        }
    }   
    
# Problem 4
## Using Dynamic Memory Allocation
    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
## Creating Function
        void print_list(Node *temp)
    {
        if(temp==NULL)
        {
            printf("Empty List\n");
            return;
        }
        while(temp!=NULL)
        {
            printf("%d ",temp->value);
            temp = temp->next;
        }
        printf("\n");
    }


