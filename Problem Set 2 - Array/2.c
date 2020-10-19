/*
Insert a value X (take input X from user) in the
array at the end of currently stored elements
Name: Shofiqul Islam
ID: 1915002536
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,  X;
    int size = 10;
    printf("Array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
    printf("Enter the Value  of X : \n");

    scanf("%d", &X);
    printf("Before :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    a[size] = X;

    size++;
    printf("After :\n");
    for(i=0; i<size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
