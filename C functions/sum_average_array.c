#include<stdio.h>
void sumavg(int a[],int n){int s=0;for(int i=0;i<n;i++)s+=a[i];printf("Sum=%d Average=%.2f",s,(float)s/n);}
int main(){int n;scanf("%d",&n);int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);sumavg(a,n);return 0;}