#include<stdio.h>
struct s{int a;float b;};union u{int a;float b;};int main(){printf("Struct=%lu Union=%lu",sizeof(struct s),sizeof(union u));return 0;}