#include<stdio.h>
int main(){
char s[100];
int i,v=0,c=0,d=0,sp=0;
printf("Enter string:");
gets(s);
for(i=0;s[i]!='\0';i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
   s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
v++;
else if(s[i]>='0'&&s[i]<='9')
d++;
else if(s[i]==' ')
sp++;
else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
c++;
}
printf("Vowels=%d\n",v);
printf("Consonants=%d\n",c);
printf("Digits=%d\n",d);
printf("Spaces=%d",sp);
return 0;
}
