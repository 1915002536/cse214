/*
Update Kth(take input K from user) in the array with the value X(take input X from user).
Name: Shofiqul Islam
ID: 1915002536
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, K, X;
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

    for (i=0; i==K; i++)
        a[i] = a[i - 1];

    a[K - 1] = X;

    printf("\n");
    printf("After :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
