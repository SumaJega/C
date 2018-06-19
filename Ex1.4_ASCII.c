#include<stdio.h>
#include"myprofile.h"
int main()
{
        documentation(__FILE__);
	char ch;
	printf("\nEnter any character:");
	scanf("%c",&ch);
	printf("\n The ASCII value of %c is %d\n",ch,ch);
	return 0;
}
