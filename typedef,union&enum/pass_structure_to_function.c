#include<stdio.h>
typedef struct{int id;float salary;}Employee;
void display(Employee e){
printf("%d %.2f",e.id,e.salary);
}
int main(){
Employee e={101,25000};
display(e);
return 0;
}