#include<stdio.h>
typedef struct{char name[20];float marks;}Student;
int main(){Student s[5];int i,top=0;for(i=0;i<5;i++)scanf("%s%f",s[i].name,&s[i].marks);for(i=1;i<5;i++)if(s[i].marks>s[top].marks)top=i;printf("Topper=%s",s[top].name);return 0;}