#include<stdio.h>
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
int main(){
printf("u16=%lu u32=%lu u64=%lu",sizeof(u16),sizeof(u32),sizeof(u64));
return 0;
}