#include<stdio.h>
void main()
{   
    float c ,f;

    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);

    f = ((9.0/5.0) * c)+32 ;

    printf("The temperature in farenheit is %f", f);


}