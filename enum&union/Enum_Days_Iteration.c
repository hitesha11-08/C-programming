#include<stdio.h>
enum days{SUN,MON,TUE,WED,THU,FRI,SAT};
int main(){enum days d;for(d=SUN;d<=SAT;d++)printf("%d ",d);return 0;}