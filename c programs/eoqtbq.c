#include<stdio.h>
#include<math.h>
void main()
{
    double demand,setup_cost,holding_cost,EOQ,TBQ;

    printf("Enter the value for demand rate: ");
    scanf("%lf", &demand);

    printf("Enter the value of setup cost: ");
    scanf("%lf", &setup_cost);

    printf("Enter the value for holding cost per unit item per unit price: ");
    scanf("%lf", &holding_cost);

    EOQ = sqrt((2*demand*setup_cost)/(holding_cost));
    TBQ = sqrt((2*setup_cost)/(demand*holding_cost));

    printf("The value for EOQ is %lf and the value for TBQ is %lf",EOQ,TBQ);
}