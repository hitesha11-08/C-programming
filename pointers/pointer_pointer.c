#include<stdio.h>
int main()
{
int a=10;
int*b=&a;
int**c=&b;
printf("value of c=%d",**c);
return 0;
}
