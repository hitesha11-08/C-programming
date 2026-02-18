#include <stdio.h>
struct Employee{int id;float salary;char dept[50];};
int main(){
    struct Employee e[3];int max=0;
    for(int i=0;i<3;i++){
        scanf("%d%f%s",&e[i].id,&e[i].salary,e[i].dept);
        if(e[i].salary>e[max].salary) max=i;
    }
    printf("%d %.2f %s",e[max].id,e[max].salary,e[max].dept);
    return 0;
}