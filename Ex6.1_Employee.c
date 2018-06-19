#include<stdio.h>
#include "myprofile.h"
struct employee
{
	int no;
	char name[12];
	int design_code;
	int days_worked;
}*ptr,e;
int main()
{
 	float basic,pf,payrate,ptax=200,g,t,n;
	documentation(__FILE__);
	ptr=&e;
	printf("\nEnter The Employee No To Generate Payslip : ");
    	scanf("%d",&ptr->no);
	printf("\nEnter the employee name:");
	scanf("%s",ptr->name);
	printf("\nEnter the no.of days worked:");
	scanf("%d",&ptr->days_worked);
	if(ptr->days_worked<30)
	{	
		printf("\n1.Clerk\n2.Salesman\n3.Helper\n4.Computer operator");
		printf("\nEnter Your choice:");
		scanf("%d",&ptr->design_code);
		printf("\n\t________________________________________________________________________\n");
		printf("\n\n\t\t\tShree Krishna Chemists And Druggist");
		printf("\n\n\tEmp.No.: %d\t\tEmp.name: %s\t\tGen.Date:%s",ptr->no,ptr->name,__DATE__);
		printf("\n\n\t Days Worked: %d\t",ptr->days_worked);
		switch((*ptr).design_code)
		{
			case 1:

				payrate=200;
				printf("\tPayRate:200");
				printf("\tDesignation: Clerk");
				basic=payrate*(ptr->days_worked);
				pf=basic/10;
				g=basic+pf;
				t=pf+ptax;
				n=g-t;
				break;
			case 2:
				payrate=300;
				printf("\tPayRate:300");
				printf("\tDesignation: Salesmen");
				basic=payrate*(ptr->days_worked);
				pf=basic/10;
				g=basic+pf;
				t=pf+ptax;
				n=g-t;
				break;
			case 3:
				payrate=250;
				printf("\tPayRate:250");
				printf("\tDesignation: Helper");
				basic=payrate*(ptr->days_worked);
				pf=basic/10;
				g=basic+pf;
				t=pf+ptax;
				n=g-t;
				break;
			case 4: 
				payrate=450;
				printf("\tPayRate:400");
				printf("\tDesignation: ComputerOperator");
				basic=payrate*(ptr->days_worked);
				pf=basic/10;
				g=basic+pf;
				t=pf+ptax;
				n=g-t;
				break;
			default:
				printf("Invalid Designation");
		}

		printf("\n\t________________________________________________________________________________");
		printf("\n\n\t Earnings \t Amount(Rs.)\t\tDeductions\tAmount(Rs.)");
		printf("\n\t________________________________________________________________________________");
		printf("\n\n\t Basic Pay\t%.0f\t\t\t P.F.\t%.0f\n\tP.Tax:\t200",basic,pf,ptax);
		printf("\n\n\t_______________________________________________________________________________");
		printf("\n\n\t Gross Earn\t%.0f\tTotalDeduct\t%.0f\t\t\tNetpay\t%.0f",g,t,n);
		printf("\n\t_________________________________________________________________________________\n");
	}
	else
		printf("\nInvalid Days worked\n");
	return 0;
}
