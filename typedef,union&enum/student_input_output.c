#include<stdio.h>
typedef struct{
int roll;
char name[20];
float marks;
}Student;
int main(){
Student s;
scanf("%d%s%f",&s.roll,s.name,&s.marks);
printf("%d %s %.2f",s.roll,s.name,s.marks);
return 0;
}