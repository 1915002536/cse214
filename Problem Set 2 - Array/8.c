/*
Search a value X(take input X from user) in the array and print the index
if X found in the array otherwise print -1.
Name: Shofiqul Islam
ID: 1915002536
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int num = 0;
    printf("The values of array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the value of X :\n");

    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
        {
            printf("Index %d",i);
            num++;
        }
    }
    if(num!=1)
        printf("-1");

    return 0;
}
