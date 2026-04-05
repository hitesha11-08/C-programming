#include<stdio.h>
int main(){
register int a = 10, b = 20;
register int temp;
printf("Before swap: a=%d b=%d", a, b);
temp = a;
a = b;
b = temp;
printf("\nAfter swap: a=%d b=%d\n", a, b);
return 0;
}
