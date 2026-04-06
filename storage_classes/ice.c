#include<stdio.h>
void fun(){
static int a=10;
static int b=20;
add();
sub();
void add(){
printf("%d\n",a+b);
}
void sub(){
printf("%d",a-b);
}
}
int main(){
fun();
return 0;
}

