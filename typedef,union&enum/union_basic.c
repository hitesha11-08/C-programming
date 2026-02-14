#include<stdio.h>
union data{int i;float f;char c;};
int main(){
union data d;
d.i=10;
printf("%d",d.i);
d.f=3.14;
printf(" %.2f",d.f);
return 0;
}