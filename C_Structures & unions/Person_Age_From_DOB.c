#include <stdio.h>
struct DOB{int year;};
struct Person{char name[50];struct DOB d;};
int main(){
    struct Person p;int current=2026;
    scanf("%s%d",p.name,&p.d.year);
    printf("Age=%d",current-p.d.year);
    return 0;
}