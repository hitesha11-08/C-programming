#include<stdio.h>
typedef struct{int id;char name[20];}Student;
void print(Student s){printf("%d %s",s.id,s.name);}int main(){Student s={1,"ABC"};print(s);return 0;}