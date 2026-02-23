#include<stdio.h>
void  arr(int array[]){
for(int i=0;i<=4;i++){
printf("array:%d\n",array[i]);
}
}
int main()
{
int array[]={11,12,13,14,15};
arr(array);
return 0;
}
