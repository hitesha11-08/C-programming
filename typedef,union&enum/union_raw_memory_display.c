#include<stdio.h>
union test{int num;unsigned char byte[4];};
int main(){
union test t;
t.num=305419896;
for(int i=0;i<4;i++)
printf("%x ",t.byte[i]);
return 0;
}