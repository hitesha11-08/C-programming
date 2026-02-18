#include <stdio.h>
union Sensor{int i;float f;};
int main(){
    union Sensor s;
    s.i=100;
    printf("%d\n",s.i);
    s.f=25.5;
    printf("%f",s.f);
    return 0;
}