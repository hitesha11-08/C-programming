#include<stdio.h>
typedef int* intptr;
void swap(intptr a,intptr b){
int temp=*a;*a=*b;*b=temp;
}
int main(){
int x=10,y=20;
swap(&x,&y);
printf("%d %d",x,y);
return 0;
}