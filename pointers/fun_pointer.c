#include<stdio.h>
void mod(int*a,int*b){
*a=40;
*b=56;
printf("value after modification: a=%d ,b=%d\n",*a,*b);
}
int main()
{
int a=20;
int b=30;
printf("value before modification: a=%d ,b=%d\n",a,b);
mod(&a,&b);
return 0;
}
