#include<stdio.h>
int main()
{
int x,y;
int *p;
x=10;
p=&x;
printf("value of x=%d\n",x);
printf("address of x=%p\n",&x);
printf("value of p=%p\n",p);
printf("value of *p=%d\n",*p);
return 0;
}

