#include <stdio.h>
struct Student{int id;char name[50];float marks;};
int main(){
    struct Student s[5];
    for(int i=0;i<5;i++)
        scanf("%d%s%f",&s[i].id,s[i].name,&s[i].marks);
    for(int i=0;i<5;i++)
        printf("%d %s %.2f\n",s[i].id,s[i].name,s[i].marks);
    return 0;
}