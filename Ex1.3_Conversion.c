#include<stdio.h>
#include"myprofile.h"
int main()
{
        documentation(__FILE__);
	int num;
	printf("\nEnter the decimal number:");
	scanf("%d",&num);
	printf("\nOctalValue:%#o",num);
	printf("\nHexadecimal Value(In small letters):%#x",num);
	printf("\nHexadecimal Value(In capital letters):%#X\n",num);
	return 0;
}


