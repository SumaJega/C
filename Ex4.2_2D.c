#include <stdio.h>
#include"myprofile.h"
int main()
{
    	documentation(__FILE__);
	float person[10][10],bmi[10];
	int n,i,j;
	printf("\nEnter the number of persons ");
	scanf("%d",&n);
	printf("Enter height in centimeters  and  weight in kgs for %d persons\n",n );	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%f",&person[i][j]);
			bmi[i]=(person[i][1])/((person[i][0]/100) *(person[i][0]/100));
		}
	}
	printf("Height\t\tWeight\t\tBMI\n" );
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<=1;j++)
	      	{
			printf("%f\t",person[i][j]);
		}	
		printf("%f\n",bmi[i]);
	}
	return 0;
}
