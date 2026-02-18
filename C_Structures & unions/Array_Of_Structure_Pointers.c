#include <stdio.h>
struct Student{int id;};
int main(){
    struct Student s1={1},s2={2};
    struct Student *arr[2];
    arr[0]=&s1;arr[1]=&s2;
    for(int i=0;i<2;i++)
        printf("%d ",arr[i]->id);
    return 0;
}