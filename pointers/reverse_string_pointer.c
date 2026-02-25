#include<stdio.h>
int main()
{
char a[]="hitesha";
char *p=a;
while(*p!='\0')
p++;
while(*p>=0)
{
printf("%c",*p);
*p--;
}
return 0;
}

