#include<stdio.h>
union value{int i;float f;};
struct data{int type;union value v;};
int main(){
struct data d;
d.type=1;
d.v.i=100;
printf("%d",d.v.i);
return 0;
}