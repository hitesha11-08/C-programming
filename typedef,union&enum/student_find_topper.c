#include<stdio.h>
typedef struct{int roll;float marks;}Student;
int main(){
Student s[5];
int i,top=0;
for(i=0;i<5;i++)
scanf("%d%f",&s[i].roll,&s[i].marks);
for(i=1;i<5;i++)
if(s[i].marks>s[top].marks)top=i;
printf("Topper Roll=%d",s[top].roll);
return 0;
}