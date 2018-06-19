#include <stdio.h>
#include <string.h>
#include "myprofile.h"
int main()
{	
	documentation(__FILE__);
	char s[200];
	int count = 0;
	char word[10],rpwrd[10],str[10][10];
	int i=0,j=0,k=0,w,p;
	printf("\nEnter a Sentence\n");
	scanf("%[^\n]s", s);
	printf("\nEnter Which Word Is To Be Replaced\n");
	scanf("%s",word);
	printf("\nEnter By Which Word The %s Is To Be Replaced\n",word);
	scanf("%s",rpwrd);
	p=strlen(s);
	for (k=0; k<p; k++)
	{

		if (s[k]!=' ')
		{
			str[i][j] = s[k];
			j++;
		}
		else
		{
			str[i][j]='\0';
			j=0; i++;
		}
	}
	str[i][j]='\0';
	w=i;
	for (i=0; i<=w; i++)
	{
		if(strcmp(str[i],word)==0)
		strcpy(str[i],rpwrd);
		printf("%s ",str[i]);
	}


	for (i = 0;s[i] != '\0';i++)
	{
		if (s[i] == ' ')
		count++;    
	}
	printf("\nNumber of words in given string are: %d\n", count + 1);
	for(i=0; s[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((s[i]>='a' && s[i]<='z'))
			s[i]=s[i]-32; 					
			continue; 						
		}
		if(s[i]==' ')					
		{
			++i;
			if(s[i]>='a' && s[i]<='z')
			{
			s[i]=s[i]-32; 						
			continue; 						
			}
		}
		else
		{
									
			if(s[i]>='A' && s[i]<='Z')
			s[i]=s[i]+32; 				
		}
	}

	printf("Capitalize string is: %s\n",s);
	return 0;
}
