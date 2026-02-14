#include<stdio.h>
enum signal{RED,YELLOW,GREEN};
int main(){enum signal s=GREEN;if(s==RED)printf("Stop");else if(s==YELLOW)printf("Wait");else printf("Go");return 0;}