#include<stdio.h>
#include"myprofile.h"
int main()
{
    documentation(__FILE__);
    int year;
    printf("\nEnter a year:");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100!=0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.\n", year);
            else
                printf("%d is not a leap year.\n", year);
        }
        else
            printf("%d is a leap year.\n", year );
    }
    else
        printf("%d is not a leap year.\n", year);
    
    return 0;
}
