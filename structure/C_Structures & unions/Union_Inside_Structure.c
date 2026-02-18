#include <stdio.h>
union Data{int i;float f;};
struct Test{union Data d;};
int main(){
    struct Test t;
    t.d.i=10;
    printf("%d",t.d.i);
    return 0;
}