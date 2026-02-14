#include<stdio.h>
enum dir{CW,CCW};typedef struct{int speed;enum dir direction;}Motor;
int main(){Motor m={100,CW};printf("%d %d",m.speed,m.direction);return 0;}