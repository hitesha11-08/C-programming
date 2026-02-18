#include <stdio.h>
struct Student{int id;char name[50];};
int main(){
    struct Student s[3];int key,found=0;
    for(int i=0;i<3;i++)
        scanf("%d%s",&s[i].id,s[i].name);
    scanf("%d",&key);
    for(int i=0;i<3;i++)
        if(s[i].id==key){
            printf("%d %s",s[i].id,s[i].name);
            found=1;
        }
    if(!found) printf("Not Found");
    return 0;
}