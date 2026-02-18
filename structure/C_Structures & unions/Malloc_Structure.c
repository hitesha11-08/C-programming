#include <stdio.h>
#include <stdlib.h>
struct Student{int id;};
int main(){
    struct Student *p;
    p=(struct Student*)malloc(sizeof(struct Student));
    p->id=5;
    printf("%d",p->id);
    free(p);
    return 0;
}