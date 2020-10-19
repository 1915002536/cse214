/*
Delete a value from Kth index(take input K from user) from the array shift all other value to left.
Name: Shofiqul Islam
ID: 1915002536
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, K;
    int size = 10;

    printf("The values of array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the value of K :\n");

    scanf("%d", &K);
     printf("\nBefore :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for (i=K-1; i<size; i++)
        a[i] = a[i+1];

    size--;

    printf("After :\n");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);

    return 0;
}

