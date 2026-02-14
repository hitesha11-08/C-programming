#include<stdio.h>
union u{int i;float f;};struct s{int id;union u data;};int main(){struct s obj;obj.id=1;obj.data.i=10;printf("%d %d",obj.id,obj.data.i);return 0;}