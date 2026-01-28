#include<stdio.h>
int main()
{
    float mark1,mark2,mark3,total,percentage;

    printf("Enter marks for the 3 subjects: ");
    scanf("%f %f %f",&mark1,&mark2,&mark3);

    total = mark1 + mark2 + mark3;

    printf("The total marks out of 300 is %f\n",total);

    percentage = (total/300)*100;

    printf("The percentage obtained is %f\n",percentage);

    if(percentage>=90)
    {
        printf("The grade is A\n");
    }
    else if(percentage>=80)
    {
        printf("The grade is B\n");
    }
    else if(percentage>=70)
    {
        printf("The grade is C\n");
    }
    else if(percentage>=60)
    {
        printf("The grade is D\n");
    }
    else if(percentage>=50)
    {
        printf("The grade is E\n");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}

