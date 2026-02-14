#include<stdio.h>
enum unit{TEMP,PRESSURE,HUMIDITY};
typedef struct{float value;enum unit u;}Sensor;
int main(){
Sensor s={36.5,TEMP};
printf("%.2f %d",s.value,s.u);
return 0;
}