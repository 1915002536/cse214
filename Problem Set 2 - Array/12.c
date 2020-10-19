/*
Delete a value X (take input X from user) from the array shift all other value to left.If X is not present
in the given array print "Element Not Found". Only delete the first occurrence of the value.
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main ()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, X, tag=0, size=10;

    printf("The values of array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the value of X :\n");
    scanf("%d",&X);
    printf("\nBefore :\n");
    for( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for( j = 0; j <= size; j++)
    {
        if(X==a[j])
        {
            for( i = j; i <= size; i++)
            {
                a[i] = a[i+1];
            }
            size--;
            tag++;
            j--;
        }
    }
    if(tag==0)
    {
        printf("\nElement Not Found\n");
    }
    else
    {
        printf("After :\n");
        for( i = 0; i < size; i++)
            printf("%d ",a[i]);
    }
    return 0;
}

