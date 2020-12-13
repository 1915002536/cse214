# Problem 1
## Creating 'Create' Function
    Node* create();
## Function to display the list
    void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}


