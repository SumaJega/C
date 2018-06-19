#include<stdio.h>
#include"myprofile.h"
int main()
{
    documentation(__FILE__);
    char c;
    printf("\nEnter a character: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("\n %c is an alphabet.",c);
    else
        printf("\n %c is not an alphabet.\n",c);

    return 0;
}

