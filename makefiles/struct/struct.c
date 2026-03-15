#include <stdio.h>
#include "struct.h"

struct student s[100];
int count=0;

void addStudent()
{
struct student *p;

p=&s[count];

printf("Enter ID: ");
scanf("%d",&p->id);

printf("Enter Name: ");
scanf("%s",p->name);

count++;
}

void searchStudent()
{
int id,i;
struct student *p;

printf("Enter ID to search: ");
scanf("%d",&id);

for(i=0;i<count;i++)
{
p=&s[i];

if(p->id==id)
{
printf("Found: %d %s\n",p->id,p->name);
return;
}
}

printf("Student not found\n");
}

void displayStudents()
{
int i;
struct student *p;

for(i=0;i<count;i++)
{
p=&s[i];
printf("%d %s\n",p->id,p->name);
}
}
