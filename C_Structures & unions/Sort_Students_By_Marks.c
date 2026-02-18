#include <stdio.h>
struct Student{int id;float marks;};
int main(){
    struct Student s[5],temp;
    for(int i=0;i<5;i++)
        scanf("%d%f",&s[i].id,&s[i].marks);
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(s[i].marks>s[j].marks){
                temp=s[i];s[i]=s[j];s[j]=temp;
            }
    for(int i=0;i<5;i++)
        printf("%d %.2f\n",s[i].id,s[i].marks);
    return 0;
}