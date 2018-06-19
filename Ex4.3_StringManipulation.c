#include<stdio.h>
#include"myprofile.h"
#include <string.h>
int main()
{
	documentation(__FILE__);
	int length;
	int i,j;
	char input[10],temp[10];
	printf("\nEnter your String with special characters:");
	scanf("%s",input);
	length=strlen(input);
	for(i=length-1;i>=0;i--)
	{
		if((input[i]>='A')&&(input[i]<='Z') || (input[i]>='a')&&(input[i]<='z'))
		{
			temp[j]=input[i];
			j++;
		}
	}
	temp[j]='\0';
	j=0;
	for(i=0;i<length;i++)
	{
		if((input[i]>='A')&&(input[i]<='Z') || (input[i]>='a')&&(input[i]<='z'))
		{
			input[i]=temp[j];
			j++;
		}
	}
	printf("Reversed String:%s\t\n",input);
	return 0;
}
