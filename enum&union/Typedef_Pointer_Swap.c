#include<stdio.h>
typedef int* intptr;
void swap(intptr a,intptr b){int t=*a;*a=*b;*b=t;}
int main(){int x=5,y=10;swap(&x,&y);printf("%d %d",x,y);return 0;}