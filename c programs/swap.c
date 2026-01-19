#include<stdio.h>
void main()
{
    int a,b,temp;

    printf("Enter a value for a: ");
    scanf("%d",&a);

    printf("Enter a value for b: ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("%d %d",a,b);
}