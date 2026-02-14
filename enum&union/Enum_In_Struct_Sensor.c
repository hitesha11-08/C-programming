#include<stdio.h>
enum unit{TEMP,PRESSURE,HUMIDITY};typedef struct{float value;enum unit u;}Sensor;
int main(){Sensor s={25.5,TEMP};printf("%.1f %d",s.value,s.u);return 0;}