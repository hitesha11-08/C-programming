#include<stdio.h>
void var(int a,int b,int*r,int*q){
*q=a/b;
*r=a%b;
}
int main()
{
int a=2;
int b=3;
int q,r;
var(a,b,&r,&q);
printf(" the quotient is :%d\n",q);
printf(" the remainder is :%d\n",r);
return 0;
}
