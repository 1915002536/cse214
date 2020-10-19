/*
Scan values from user into an array until end of file.
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main()
{
    int a[100];
    int i = 0, j;

    printf("Enter values :\n");

    while(scanf("%d",&a[i]) != EOF)
    {
        i++;
    }
    for(j = 0; j < i; j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
