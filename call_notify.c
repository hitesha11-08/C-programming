#include<stdio.h>
void trackMe(){
static int count=0;
count++;
printf("I have been called %d times\n",count);
}
int main()
{
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
trackMe();
}
return 0;
}
