/*
Scan values from user into an array until user input is 0(zero).
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main()
{
    int a[100];
    int i = 0, j;

    printf("Enter values : \n");

    for(i = 0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] == 0)
        {
            break;
        }
    }

    return 0;
}


