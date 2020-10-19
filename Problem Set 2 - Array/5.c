/*
Update fifth(5th) index with another value.
Name: Shofiqul Islam
ID: 1915002536
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int K = 5;
    int size = 10;
    int X = 65;

         printf("The values of array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

    printf("Before :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

     a[5] = X;

    printf("After :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
}
