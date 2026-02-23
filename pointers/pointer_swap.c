#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int a=20;
int b=30;
printf("Before swapping=%d %d\n",a,b);
swap(&a,&b);
printf("After swapping=%d %d\n",a,b);
return 0;
}
