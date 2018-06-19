#include <stdio.h>
#include "myprofile.h"
int bubble_sort(int*,int);
int main()
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
	bubble_sort(arr,n);
	return 0;
}
int bubble_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(*(arr+j)> *(arr+(j+1)))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+(j+1));
				*(arr+(j+1))=temp;
			}
		}
	}
	printf("\nTHE SORTED NUMBERS ARE:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}
