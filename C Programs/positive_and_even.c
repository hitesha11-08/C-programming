#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);

if(a>0 && b>0)
printf("both are positive\n");

if(a%2==0 || b%2==0)
printf("at least one number is even\n");

return 0;
}
