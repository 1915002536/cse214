/*
Print the array elements in reverse order. Each element should be separated by space.
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int i;
    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



