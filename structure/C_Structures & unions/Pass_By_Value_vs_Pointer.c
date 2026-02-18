#include <stdio.h>
struct Num{int x;};
void val(struct Num n){n.x=50;}
void ptr(struct Num *n){n->x=50;}
int main(){
    struct Num n={10};
    val(n);
    printf("%d\n",n.x);
    ptr(&n);
    printf("%d",n.x);
    return 0;
}