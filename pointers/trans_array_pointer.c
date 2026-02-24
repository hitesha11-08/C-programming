#include<stdio.h>
int main()
{
int a[11] ={1,2,3,4,5,6,7,8,9,10,11};
int *p = a;
for(int i = 0; i < 11; i++)
{
printf("%d\n",*p++);
printf("%d\n",(*p)++);
}
return 0;

}
