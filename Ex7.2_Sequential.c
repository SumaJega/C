#include <stdio.h>
#include <string.h>
#include "myprofile.h"
#define MINBAL 500
struct Bank_Account
{
	char no[10];
	char name[20];
	int balance;
};

void insertData()
{
	FILE *fp;
	struct Bank_Account acc;
	fp=fopen("data.txt","w");
	printf("\n*****Enter Details****\n");
	printf("Enter the Account Number : ");
	scanf("%s",acc.no);
	printf("Enter the Account Name : ");
	scanf("%s",acc.name);
	printf("Enter the balance in your account: ");
	scanf("%d",&acc.balance);
	fprintf(fp,"%10s%20s%15d\n",acc.no,acc.name,acc.balance);
	fclose(fp);
}
void appendData()
{
	FILE *fp;
	struct Bank_Account acc;
	fp=fopen("data.txt","a");
	printf("\n*****Enter Details****\n");
	printf("Enter the Account Number : ");
	scanf("%s",acc.no);
	printf("Enter the Account Name : ");
	scanf("%s",acc.name);
	printf("Enter the balance in your account: ");
	scanf("%d",&acc.balance);
	fprintf(fp,"%10s%20s%15d\n",acc.no,acc.name,acc.balance);
	fclose(fp);
}

void showAllData()
{
	FILE *fp;
	struct Bank_Account acc;
	fp=fopen("data.txt","r");
	printf("*****Display All Records*****\n");
	printf("\n\nAccount number\t\t\tAccount name\t\t\tBalance\n\n");
	while(!feof(fp))
	{
		fscanf(fp,"%10s%20s%15d",acc.no,acc.name,&acc.balance);
		printf("%10s%20s%15d\n",acc.no,acc.name,acc.balance);
	}
	fclose(fp);
}
void checkData()
{
	FILE *fp;
	struct Bank_Account acc;
	int flag;
	int bal=0;
	fp=fopen("data.txt","r");
	flag=0;
	printf("\nThe Number of Account Holder whose Balance less than the Minimum Balance : \n");
	while(!feof(fp))
	{
		fscanf(fp,"%10s%20s%15d",acc.no,acc.name,&acc.balance);
		if(acc.balance<500)
			printf("%10s%20s%15d\n",acc.no,acc.name,acc.balance);
	}
	fclose(fp);
}
void main()
{
	int choice;
	documentation(__FILE__);
	do
	{
		printf("\n\n*****TELEPHONE DIRECTORY*****\n\n");
	        printf("1) Insert Record\n");
	 	printf("2) check Record\n");
	 	printf("3) Display all record\n");
	 	printf("4) Append Record\n");
		printf("5)Exit\n");
	 	printf("Enter your choice : ");
	 	scanf("%d",&choice);
		switch(choice)
		{
			case 1 : //call insert record
				  insertData();
				  break;
			case 2: //call check data
				checkData();
				 break;
			case 3 : //Read all record
				 showAllData();
				 break;
			case 4:  //call append record
				 appendData();
				  break;
		}	
	}while(choice<5);
}




