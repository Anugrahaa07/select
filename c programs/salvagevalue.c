#include<stdio.h>
void main()
{
    float p, s, d;
    int y;

    printf("Enter the rate of purchase: ");
    scanf("%f", &p);

    printf("Enter the depreciation value: ");
    scanf("%f", &d);

    printf("Enter the number of years of service: ");
    scanf("%d", &y);

    s = p - (d * y);

    printf("The salvage value of an item is %f", s);
}