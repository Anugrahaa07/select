#include<stdio.h>
int main()
{
    int n, fact = 1, i;

    printf("Enter the number of  which you want to find the factorial of: ");
    scanf("%d",&i);

    n=i;

    for(n;n>=1;n=n-1)
    {
        fact = fact * n;
    }

    printf("The factorial of %d is %d",i,fact);
    return 0;
}