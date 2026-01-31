#include<stdio.h>
int main()
{
    int i=101,count =0;

    do
    {
        if(i>100)
        {
            if(i%7==0)
            {
                count = count+i;
            }
        i=i+1;
        }
    } while (i<200);
    printf("The sum of integers greater than 100 and less than 200 and is divisible by 7 is %d",count);
    return 0;
}
