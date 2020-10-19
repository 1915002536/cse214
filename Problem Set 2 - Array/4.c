/*
Insert value X(take input X from user) in the array at Kth(take input K from user)
index and shift all other value to the right.
Name: Shofiqul Islam
ID: 1915002536
*/

#include <stdio.h>
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
    printf("Enter the value of X :\n");
    scanf("%d", &X);
    printf("Enter the value of K :\n");
    scanf("%d", &K);
    printf("\nBefore :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;

    printf("After :\n");

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}
