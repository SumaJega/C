#include<stdio.h>
#include"myprofile.h"
int main()
{	
	documentation(__FILE__);
	int a=10;
	float b=19.89;
	char c='j';
	double d=2.7798;
	char name[10]="jega";
	printf("\nSize of Integer:%d",sizeof(a));
     	printf("\nSize of Float:%d",sizeof(b));
     	printf("\nSize of Character:%d",sizeof(c));
     	printf("\nSize of Double:%d",sizeof(d));
     	printf("\nSize of CharacterArray:%d\n",sizeof(name));
	return 0;
}

