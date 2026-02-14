#include<stdio.h>
struct s{int i;float f;char c;};
union u{int i;float f;char c;};
int main(){
printf("Struct=%lu Union=%lu",sizeof(struct s),sizeof(union u));
return 0;
}