#include <stdio.h>
#include"myprofile.h"
int main()
{
    documentation(__FILE__);
    int number, originalNumber, remainder, result = 0;
    printf("\nEnter a three digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
    return 0;
}
