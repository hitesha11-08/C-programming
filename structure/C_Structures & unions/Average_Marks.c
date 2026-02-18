#include <stdio.h>
struct Student{int id;float marks;};
int main(){
    struct Student s[5];float sum=0;
    for(int i=0;i<5;i++){
        scanf("%d%f",&s[i].id,&s[i].marks);
        sum+=s[i].marks;
    }
    printf("Average=%.2f",sum/5);
    return 0;
}