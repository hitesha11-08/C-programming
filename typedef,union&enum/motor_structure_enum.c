#include<stdio.h>
enum direction{CW,CCW};
typedef struct{int speed;enum direction dir;}Motor;
int main(){
Motor m={100,CW};
printf("%d %d",m.speed,m.dir);
return 0;
}