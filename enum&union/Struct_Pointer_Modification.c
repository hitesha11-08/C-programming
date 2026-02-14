#include<stdio.h>
typedef struct{int value;}Data;
void modify(Data* d){d->value=100;}int main(){Data d={10};modify(&d);printf("%d",d.value);return 0;}