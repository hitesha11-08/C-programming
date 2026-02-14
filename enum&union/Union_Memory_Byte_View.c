#include<stdio.h>
union d{int i;char bytes[4];};int main(){union d data;data.i=1025;for(int i=0;i<4;i++)printf("%d ",data.bytes[i]);return 0;}