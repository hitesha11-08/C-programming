#include<stdio.h>
enum status{OFF,ON};
typedef struct{int id;enum status st;}Device;
int main(){
Device d={1,ON};
if(d.st==ON)printf("Device ON");
else printf("Device OFF");
return 0;
}