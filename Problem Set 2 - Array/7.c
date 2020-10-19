/*
Search a value X(take input X from user) in the array and print "Found"
if X found in the array otherwise print "Not Found".
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
            num++;
    }
    if(num == 1)
        printf("Found\n");
    else
        printf("Not Found");

    return 0;
}
