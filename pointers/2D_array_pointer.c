#include<stdio.h>
int main()
{
int arr[2][3] = {{2,7,8},{5,6,7}};
int *p = arr;
for(int i=0;i<3;i++){
   printf("%d\n",*(p+i));
}
 for(int i=3;i<7;i++){
   printf("%d\n",*(p+i));
}
return 0;
}
