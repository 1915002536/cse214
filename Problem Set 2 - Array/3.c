/*
Insert a value �X� (take input X from user) in the array at third (3rd) index and
shift all other value to right.
Name: Shofiqul Islam
ID: 1915002536
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int K = 3;
    int size = 10;

    printf("The values of array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the value of X :\n");
    scanf("%d", &X);
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

