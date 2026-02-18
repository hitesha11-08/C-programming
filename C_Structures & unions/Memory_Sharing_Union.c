#include <stdio.h>
union Share{int i;float f;};
int main(){
    union Share s;
    s.i=65;
    printf("%d\n",s.i);
    printf("%f",s.f);
    return 0;
}