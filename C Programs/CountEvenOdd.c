#include<stdio.h>
int main()
{
int a[10],n;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter elements:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("reversed array:");
for(int i=n-1;i>=0;i--)
{
printf("%d ",a[i]);
}
return 0;
}
