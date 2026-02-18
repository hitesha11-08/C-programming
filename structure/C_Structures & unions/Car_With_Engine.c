#include <stdio.h>
struct Engine{int hp;};
struct Car{char name[50];struct Engine e;};
int main(){
    struct Car c;
    scanf("%s%d",c.name,&c.e.hp);
    printf("%s %dHP",c.name,c.e.hp);
    return 0;
}