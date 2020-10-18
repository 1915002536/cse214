/*
Scan N( take input N from user ) values from user into an array.
Name: Shofiqul Islam
ID: 1915002536
*/

#include<stdio.h>
int main()
{
    int N, i;
    int a[100], size = 0;

    printf("Enter the value of N: \nN.B. Don't enter zero and the value must not be upto 100\n");
    scanf("%d",&N);

    if(N<0 || N>100)
    {
        printf("Invalid value ! Please try again\n");
    }
    else
    {
        for(i=1; i<=N; i++)
        {
            size++;
            scanf("%d",&a[i]);
        }
        if(size>100)
        {
            printf("Array Overflow\n");
        }
    }
    return 0;
}



