#include<stdio.h>
#include<math.h>

int getWeight(int n)
{
int w=0;
float root=sqrt(n);
if(root==ceil(root))
    w+=5;
if(n%4==0&&n%6==0)
    w+=4;
if(n%2==0)
    w+=3;
return w;
}

int main()
{
    int nums[15];
    int ws[15];
    int i,j,t,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("\nEnter numbers");
    for(i=0;i<n;i++)
        scanf("%d",&nums[i]);
    for(i=0;i<n;i++)
        ws[i]=getWeight(nums[i]);
    printf("\nBefore sorting:\n");
    for(i=0;i<n;i++)
        printf("%d:%d\t",nums[i],ws[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(ws[j]>ws[j+1])
                {
                t=ws[j+1];
                ws[j+1]=ws[j];
                ws[j]=t;
                t=nums[j+1];
                nums[j+1]=nums[j];
                nums[j]=t;
                }
    printf("\nSorted:\n");
    for(i=0;i<n;i++)
        printf("%d:%d\t",nums[i],ws[i]);
    return 0;
}
