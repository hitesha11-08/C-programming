#include<stdio.h>
struct var{
int a;
int b;
};
void add(struct var *p){
p->a=p->a+10;
p->b=p->b+20;
printf("Modified a=%d\n",p->a);
printf("Modified b=%d\n",p->b);
printf("Sum=%d",p->a+p->b);
}
int main(){
struct var v;
printf("Enter two numbers: ");
scanf("%d%d",&v.a,&v.b);
add(&v);
return 0;
}

