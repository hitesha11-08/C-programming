#include<stdio.h>
void increment(int *b){
for(int i=1;i<3;i++)
{
*b=(*b)+i;
printf("the elements are:%d\n",*b);
}
}
int main()
{
int a =10;
int *b=&a;
increment(b);
return 0;
}
