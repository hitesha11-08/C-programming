#include<stdio.h>
enum menu{ADD=1,SUB,MUL,DIV};
int main(){enum menu m=ADD;switch(m){case ADD:printf("Add");break;case SUB:printf("Sub");break;case MUL:printf("Mul");break;case DIV:printf("Div");break;}return 0;}