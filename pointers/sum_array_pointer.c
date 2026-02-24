#include<stdio.h>
int main()
{
int sum;
int a[11] ={1,2,3,4,5,6,7,8,9,10,11};
int *p = a;
for(int i = 0; i < 11; i++)
{
sum+=*(p + i);
}
printf("%d\n",sum);
return 0;
}
