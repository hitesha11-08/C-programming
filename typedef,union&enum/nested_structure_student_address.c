#include<stdio.h>
typedef struct{char city[20];int pin;}Address;
typedef struct{int roll;Address addr;}Student;
int main(){
Student s={1,{"Chennai",600001}};
printf("%d %s %d",s.roll,s.addr.city,s.addr.pin);
return 0;
}