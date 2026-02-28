#include<stdio.h>
int main()
{
int n;
int temp;
int r;
int sum=0;

printf("enter number:");
scanf("%d",&n);

temp=n;

while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}

if(sum==temp)
printf("armstrong number");
else
printf("not armstrong number");

return 0;
}
