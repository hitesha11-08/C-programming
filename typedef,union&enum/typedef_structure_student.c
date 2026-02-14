#include<stdio.h>
typedef struct{
int roll;
float marks;
}Student;
int main(){
Student s={1,95.5};
printf("%d %.2f",s.roll,s.marks);
return 0;
}