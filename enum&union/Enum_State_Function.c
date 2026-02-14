#include<stdio.h>
enum state{INIT,RUNNING,ERROR};void update(enum state s){printf("State=%d",s);}int main(){update(RUNNING);return 0;}