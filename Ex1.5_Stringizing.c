#include<stdio.h>
#include"myprofile.h"
#define s(x)  #x
int main()
{
        documentation(__FILE__);
	int age;
	printf("\nEnter your age:");
	scanf("%d",&age);
	printf("\nYour age %s is %d",s(age),age);
	return 0;
} 	
