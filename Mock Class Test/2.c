#include <stdio.h>
int main()
{
    int a[100] = {45, 22, 34, 45, 56, 67, 79, 84, 95, 70};
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
    printf("\n\n");
    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;

    printf("After :\n");

    for(i=0; i<size; i++)
        printf("%d ", a[i]);
    printf("\n\n");
    printf("After reversing the array: \n");
    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

