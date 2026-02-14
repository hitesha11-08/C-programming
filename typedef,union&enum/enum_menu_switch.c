#include<stdio.h>
enum menu{ADD=1,SUB,MUL,DIV};
int main(){
int choice=1,a=10,b=5;
switch(choice){
case ADD:printf("%d",a+b);break;
case SUB:printf("%d",a-b);break;
case MUL:printf("%d",a*b);break;
case DIV:printf("%d",a/b);break;
default:printf("Invalid");
}
return 0;
}