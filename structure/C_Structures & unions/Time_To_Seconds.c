#include <stdio.h>
struct Time{int h,m,s;};
int main(){
    struct Time t;
    scanf("%d%d%d",&t.h,&t.m,&t.s);
    printf("%d",t.h*3600+t.m*60+t.s);
    return 0;
}