#include <stdio.h>
#include "myprofile.h"
void main()
{
	documentation(__FILE__);
	int n,*arr,i,j,temp;
	printf("\nEnter the limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter number %d: ",i+1);
		scanf("%d",arr+i);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(arr+i)> *(arr+j))
			{
				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
	printf("\nTHE SORTED NUMBERS ARE:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(arr+i));
}
