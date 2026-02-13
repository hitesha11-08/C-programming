#include<stdio.h>
int sum(int n){int s=0;while(n){s+=n%10;n/=10;}return s;}
int main(){int n;scanf("%d",&n);printf("%d",sum(n));return 0;}