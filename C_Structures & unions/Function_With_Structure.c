#include <stdio.h>
struct Student{int id;char name[50];};
void display(struct Student s){
    printf("%d %s",s.id,s.name);
}
int main(){
    struct Student s={1,"Ram"};
    display(s);
    return 0;
}