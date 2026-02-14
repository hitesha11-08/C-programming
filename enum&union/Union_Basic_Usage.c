#include<stdio.h>
union data{int i;float f;char c;};int main(){union data d;d.i=65;printf("%d",d.i);return 0;}