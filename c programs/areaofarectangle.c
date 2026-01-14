#include<stdio.h>
void main() 
{
    float l , b, area;
    
    printf("Enter the required length: ");
    scanf("%f", &l);
    printf("Enter the required breadth: ");
    scanf("%f", &b);
    
    area = l * b;
    
    printf("The area of the rectangle is %f", area);

}