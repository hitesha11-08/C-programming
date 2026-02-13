#include<stdio.h>
int reverse(int n){int r=0;while(n){r=r*10+n%10;n/=10;}return r;}
int palindrome(int n){return n==reverse(n);}
int main(){int n;scanf("%d",&n);if(palindrome(n))printf("Palindrome");else printf("Not Palindrome");return 0;}