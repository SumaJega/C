#include<stdio.h>
#include"myprofile.h"
int main()
{	
   	 documentation(__FILE__);
    	int n,i,count=0;
   	 float person[100];
 	 printf("\n Enter the number of persons:");
  	 scanf("\n %d",&n);
    	printf("\nEnter the height of %d person:\n",n);
 for(i=0;i<n;i++)
    	{
     		  scanf("%f" ,&person[i]);
     		  if((person[i]>=150)&&(person[i]<=165))
      		 count=count+1;
   	 }
  	 printf("\n Number of person whose height is above average:%d \n",count);
  	 return 0;
}
