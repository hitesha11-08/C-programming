#include<stdio.h>
union test{unsigned short num;unsigned char byte[2];};
int main(){
union test t;
t.num=0x1234;
printf("%x %x",t.byte[0],t.byte[1]);
return 0;
}