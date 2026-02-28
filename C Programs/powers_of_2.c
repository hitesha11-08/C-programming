#include<stdio.h>
int main()
{
int i;
int power=1;

for(i=1;i<=10;i++)
{
power=power*2;
printf("2^%d = %d\n",i,power);
}

return 0;
}
