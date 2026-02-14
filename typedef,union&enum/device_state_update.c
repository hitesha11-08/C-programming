#include<stdio.h>
enum state{INIT,RUNNING,ERROR};
void update(enum state s){
if(s==INIT)printf("INIT");
else if(s==RUNNING)printf("RUNNING");
else printf("ERROR");
}
int main(){
update(RUNNING);
return 0;
}