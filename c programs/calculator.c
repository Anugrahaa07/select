#include<stdio.h>
int main()
{
    int x,y,sum,difference,product,division,operation,modulo; 
   
    printf("What operation do you want to perform\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo Division: ");
    scanf("%d",&operation);

    printf("Enter 2 numbers: \n");
    scanf("%d %d",&x,&y);

    if(operation == 1)
    {
        sum = x + y;
        printf("The sum is %d",sum);
    }
    else if(operation == 2)
    {
        difference = x - y;
        printf("The difference is %d",difference);
    }
    else if(operation == 3)
    {
        product = x * y;
        printf("The product is %d",product);
    }
    else if(operation == 4)
    {
        division = (x / y);
        printf("The quotient is %d",division);
    }
    else if(operation == 5)
    {
        modulo = x % y;
        printf("The remainder is %d",modulo);
    }
    else
    {
        printf("INVALID ENTRY");
    }
    return 0;
}