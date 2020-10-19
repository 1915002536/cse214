/*
Delete a value from before Kth index(take input K from user) from the array shift all other value to left.
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X, K;
    int size = 10;
    printf("The values of array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    printf("Enter the index of K :\n");
    scanf("%d",&K);

    K--;

    if(K<0 || K>=100)
    {
        printf("\nArray Index Out of Bound\n");
    }

    else if(K>=size)
    {
        printf("\nArray Index Out of Range\n");
    }

    else
    {
        printf("Before :\n");
        for(i=0; i<size; i++)
        {
            printf("%d ",a[i]);
        }

        printf("\n");

        for(i=K; i<size-1; i++)
        {
            a[i] = a[i+1];
        }
        size--;

        printf("After :\n");
        for(i=0; i<size; i++)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}
