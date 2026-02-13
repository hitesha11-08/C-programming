#include<stdio.h>
int max(int a[],int n){int m=a[0];for(int i=1;i<n;i++)if(a[i]>m)m=a[i];return m;}
int main(){int n;scanf("%d",&n);int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("%d",max(a,n));return 0;}