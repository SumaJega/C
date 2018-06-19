#include<stdio.h>
#include "myprofile.h"
int octal(int);
int binary(int);
int hexa(int);
int main()
{
	documentation(__FILE__);
	int CH;
	int num;
	printf("\nEnter Decimal Number To Be Converted : \n");
	scanf("%d",&num);
	printf("\nSelect Conversion");
	printf("\n 1. DECIMAL TO BINARY\n");
	printf("\n 2. DECIMAL TO OCTAL\n");
	printf("\n 3. DECIMAL TO HEXADECIMAL\n");
	printf("\nENTER CHOICE HERE :");
	scanf("%d",&CH);
	switch(CH)
	{
		case 1 :
			binary(num);
			break;
		case 2 :
			octal(num);
			break;
		case 3 :
			hexa(num);
			break;
		default :
			printf("\nYOU HAVE ENTERED WRONG CHOICE !!!");
	}
	return 0;
}
int binary(int n)
{
		int  i = 0,j=0;
	int ar[10];
		while(n != 0)
		{
			ar[i]=n%2;
			n=n/2;
			i++;
		}
		printf("\nBinary value is");
		for(j=i-1;j>=0;j--)
		{
			printf("%d",ar[j]);
		}
		printf("\n");
}
int octal(int n)
{
	int  i = 0,j=0;
	int ar[10];
		while(n != 0)
		{
			ar[i]=n%8;
			n=n/8;
			i++;
		}

			printf("\nOctal value is");
		for(j=i-1;j>=0;j--)
		{
			printf("%d",ar[j]);
		}
		printf("\n");
}
int hexa(int n)
{
	int  i = 0,j=0,h=65;
	int ar[10];
		while(n != 0)
		{
			ar[i]=n%16;
			n=n/16;
			i++;
		}
			printf("\nHexadecimal value is ");
		for(j=i-1;j>=0;j--)
		{
			if(ar[j]>=10)
			{
				h=h+ar[j]-10;
				printf("%c",h);
			}
			else
			{
				printf("%d",ar[j]);
			}
		}
		printf("\n");
}
