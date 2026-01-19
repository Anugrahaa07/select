#include<stdio.h>
void main()
{
    int a, d;

    printf("Enter the value for a: ");
    scanf("%d", &a);

    d = (a / 10) + (a % 10);

    printf("The sum of digits is %d", d);
}