#include<stdio.h>
int my_strlen(char s[]){int i=0;while(s[i]!='\0')i++;return i;}
int main(){char s[100];scanf("%s",s);printf("%d",my_strlen(s));return 0;}