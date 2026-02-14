#include<stdio.h>
enum status{OFF,ON};
typedef struct{int device_id;enum status st;}Device;
int main(){
Device d={101,ON};
printf("%d %d",d.device_id,d.st);
return 0;
}