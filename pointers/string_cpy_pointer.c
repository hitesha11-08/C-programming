#include<stdio.h>
int main()
{
int i=0;
char cpy[]={"THEOGLEADER"};
char *a=cpy;
char em[12];
char *b=em;
while(*(a+i)!='\0')
{
*(b+i)=*(a+i);
i++;
}
*(b+i)='\0';
while(*b!='\0')
{
printf("%c",*b++);
}
printf("\n");
return 0;
}
