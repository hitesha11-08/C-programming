#include<stdio.h>
void reverse(int *n)
{
int rev=0,rem;
while(*n!=0)
{
rem=*n%10;
rev=rev*10+rem;
*n=*n/10;
}
*n=rev;
}
int main()
{
int n;
printf("Enter number:");
scanf("%d",&n);
reverse(&n);
printf("Reversed number=%d\n",n);
return 0;
}
