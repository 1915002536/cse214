/*
Print entire array each element separated by space.
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
