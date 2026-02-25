#include<stdio.h>
int main()
{
int i=0;
char a[]={"ogleader"};
char b[]={"hitesha"};
char *c=a;
char *d=b;
if(*c==*d){
printf("string is equal\n");
}
else
{
printf("string not equal\n");
}
return 0;
}

