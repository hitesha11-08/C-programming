#include <stdio.h>
struct Address{char city[50];int pin;};
struct Student{int id;char name[50];struct Address a;};
int main(){
    struct Student s;
    scanf("%d%s%s%d",&s.id,s.name,s.a.city,&s.a.pin);
    printf("%d %s %s %d",s.id,s.name,s.a.city,s.a.pin);
    return 0;
}