/*
Insert any value at tenth(10th) index of the array.
Name: Shofiqul Islam
ID: 1915002536
*/
#include <stdio.h>
int main()
{
    int a[100] = {11, 27, 34, 47, 54, 69, 73, 85, 69, 80};
    int i;
    int size = 10;
    int X = 100;

    printf("The value of array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    printf("Before :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    a[9] = X;
    printf("After :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
