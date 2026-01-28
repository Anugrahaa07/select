#include<stdio.h>
int main()
{
    char colour;

    printf("Enter the code for colour in rainbow: ");
    scanf("%c",&colour);

    if(colour == 'v' || colour == 'V')
    {
        printf("The colour is violet");
    }
    else if(colour == 'i' || colour =='I')
    {
        printf("The colour is indigo");
    }
    else if(colour == 'b' || colour == 'B')
    {
        printf("The colour is blue");
    }
    else if(colour == 'g' || colour == 'G')
    {
        printf("The colour is green");
    }
    else if(colour == 'y' || colour == 'Y')
    {
        printf("The colour is yellow");
    }
    else if(colour == 'o' || colour == 'O')
    {
        printf("The colour is orange");
    }
    else if(colour == 'r' || colour == 'R')
    {
        printf("The colour is red");
    }
    else
    {
        printf("INVALID ENTRY");
    }
    return 0;
}             
