#include<stdio.h>
union d{unsigned short value;unsigned char byte[2];};int main(){union d data;data.value=0x1234;printf("%x %x",data.byte[0],data.byte[1]);return 0;}