#include<stdio.h>
typedef struct{char city[20];}Address;typedef struct{char name[20];Address addr;}Student;
int main(){Student s={"Hitesha",{"Chennai"}};printf("%s %s",s.name,s.addr.city);return 0;}