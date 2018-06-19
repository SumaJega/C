#include <stdio.h>
#include <string.h>
#include "myprofile.h"
struct person
{
     char name[20];
     long telno;
};

void appendData()
{
      FILE *fp;
      struct person obj;
      fp=fopen("record.dat","ab");
      printf("*****Add Record****\n");
      printf("Enter Name : ");
      scanf("%s",obj.name);
      printf("Enter Telephone No. : ");
      scanf("%ld",&obj.telno);
      fwrite(&obj,sizeof(obj),1,fp);
      fclose(fp);
}
void insertData()
{
      FILE *fp;
      struct person obj;
      fp=fopen("record.dat","wb");
      printf("*****Insert Record****\n");
      printf("Enter Name : ");
      scanf("%s",obj.name);
      printf("Enter Telephone No. : ");
      scanf("%ld",&obj.telno);
      fwrite(&obj,sizeof(obj),1,fp);
      fclose(fp);
}

void showAllData()
{
      FILE *fp;
      struct person obj;
      fp=fopen("record.dat","rb");
      printf("*****Display All Records*****\n");
      printf("\n\n\t\tName\t\t\tTelephone No.");
      printf("\n\t\t=====\t\t\t===============\n\n");
     while(fread(&obj,sizeof(obj),1,fp)>0)
     		 printf("%20s %30ld\n",obj.name,obj.telno);
      fclose(fp);
}

void findData()
{
      FILE *fp;
      struct person obj;
      char name[20];
      int totrec=0;
      fp=fopen("record.dat","rb");
      printf("\n*****Display Specific Records*****\n");
      printf("\nEnter Name : ");
      scanf("%s",name);
      while(fread(&obj,sizeof(obj),1,fp)>0)
	{
	 if(strcmp(obj.name,name)==0)
	 {
		printf("\n\nName   :  %s",obj.name);
		printf("\nTelephone No : %ld",obj.telno);
		totrec++;
	 }
      }
      if(totrec==0)
	 printf("\n\n\nNo Data Found");
      else
	 printf("\n\n===Total %d Record found===\n\n",totrec);
      fclose(fp);
}



int main()
{
    	 int choice;
	 documentation( __FILE__ );
  	do
	{
		printf("\n\n*****TELEPHONE DIRECTORY*****\n\n");
		 printf("1) Insert Record\n");
	 	printf("2) Append Record\n");
	 	printf("3) Find Record\n");
	 	printf("4) Display all record\n");
	 	printf("5) Exit\n");
	 	printf("Enter your choice : ");
	 	scanf("%d",&choice);
		 switch(choice)
		{
			case 1 : //call insert record
				  insertData();
				 break;
			case 2 :  //call append record
				 appendData();
				  break;
			case 3 : //call find record
				 findData();
				 break;
			case 4 : //Read all record
				 showAllData();
				 break;
		}	
	}while(choice<5);
	return 0;
}
