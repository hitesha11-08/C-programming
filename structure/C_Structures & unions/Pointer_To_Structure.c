#include <stdio.h>
struct Student{int id;};
int main(){
    struct Student s={10};
    struct Student *p=&s;
    printf("%d",p->id);
    return 0;
}