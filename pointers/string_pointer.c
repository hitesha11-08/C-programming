#include<stdio.h>
#include<string.h>
int main()
{
int len;
char a[] ={"hitesha"};
char *p= a;
while(*p!='\0')
{
*p++;
len++;}
printf("the lenght of the string:%d\n",len);
return 0;
}
