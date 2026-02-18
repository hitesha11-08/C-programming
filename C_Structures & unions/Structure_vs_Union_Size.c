#include <stdio.h>
struct S{int i;float f;char c;};
union U{int i;float f;char c;};
int main(){
    printf("Struct=%lu\n",sizeof(struct S));
    printf("Union=%lu",sizeof(union U));
    return 0;
}