/*
Delete a value before X (take input X from user) from the array shift all other value to left. If X is not
present in the given array print "Element Not Found". Only delete the first occurrence of the value.
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X, k=-1;
    int size = 10;

    printf("The values of array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the value of X :\n");
    scanf("%d",&X);

    for(i=0; i<size; i++)
    {
        if(X == a[i])
        {
            k=i;
            k--;
            break;
        }
    }

    if(k == -1)
    {
        printf("\nElement Not Found\n");
    }

    else
    {
        printf("Before :\n");
        for(i=0; i<size; i++)
        {
            printf("%d ",a[i]);
        }

        printf("\n");

        for(i=k; i<size-1; i++)
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

