#include<stdio.h>
enum signal{RED,YELLOW,GREEN};
int main(){
enum signal s=GREEN;
if(s==RED)printf("STOP");
else if(s==YELLOW)printf("WAIT");
else printf("GO");
return 0;
}