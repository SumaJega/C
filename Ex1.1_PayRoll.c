#include<stdio.h>
#include"myprofile.h"
int main()
{	
	documentation(__FILE__);
	char Name[30];
	float BasicPay;
	float Hra;
	float Da;
	float Pf;
	float Gross;
	printf("\nEnter your Name:");
	scanf("%s",Name);
	printf("Enter your BasicPay:");
	scanf("%f",&BasicPay);
	printf("Enter your HRA:");
        scanf("%f",&Hra);
	printf("Enter your DA:");
        scanf("%f",&Da);
	Pf=(BasicPay*12)/100;
	Gross=(BasicPay+Hra+Da+Pf);
	printf("\nName:%s ",Name);
	printf("\nBasicPay:%.2f",BasicPay);
	printf("\nHRA:%.2f",Hra);
	printf("\nDA:%.2f",Da);
	printf("\nPF:%.2f",Pf);
	printf("\n***GrossSalary:%.2f***\n",Gross);
	return 0;
}

