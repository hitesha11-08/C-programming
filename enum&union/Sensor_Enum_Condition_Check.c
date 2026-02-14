#include<stdio.h>
enum unit{TEMP,PRESSURE,HUMIDITY};typedef struct{float value;enum unit u;}Sensor;
int main(){Sensor s={30,TEMP};if(s.u==TEMP)printf("Temperature");else if(s.u==PRESSURE)printf("Pressure");else printf("Humidity");return 0;}