#include<stdio.h>
#include<ctype.h>
void count(char s[]){int v=0,c=0,d=0,sp=0,i=0;while(s[i]!='\0'){if(isalpha(s[i])){char ch=tolower(s[i]);if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;else c++;}else if(isdigit(s[i]))d++;else if(s[i]==' ')sp++;i++;}printf("Vowels=%d Consonants=%d Digits=%d Spaces=%d",v,c,d,sp);}
int main(){char s[200];fgets(s,200,stdin);count(s);return 0;}