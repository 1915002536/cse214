# Problem 1
## // A linked list node
    struct node
    {
    int value;
    struct node *next;
    };

## // Declare three variable,Assign value and next address

    struct node a, b, c;
       struct node *head = NULL;

    head = &a;

    a.value = 5;
    a.next = &b;
    
    b.value = 10;
    b.next = &c;

    c.value = 15;
    c.next = NULL;

## // Print the variable address, value and next variable address
    printf("%p \t %d \t %p\n", &a, a.value, a.next);
    printf("\n%p \t %d \t %p\n", &b, b.value, b.next);
    printf("\n%p \t %d \t %p\n", &c, c.value, c.next);
     

