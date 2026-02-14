#include<stdio.h>
typedef struct
{
int id;
char name[20];
}
Student;
int main()
{
Student s={11,"Hitesha"};
printf("%d %s",s.id,s.name);
return 0;
}
