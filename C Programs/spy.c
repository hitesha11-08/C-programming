#include<stdio.h>
int main(){
int n,last,sum=0,product=1;
printf("enter a number:");
scanf("%d",&n);
while(n>0){
last = n%10;
sum +=last;
product *= last;
n = n/10;
}
printf("the sum =%d\n",sum);
printf("the product=%d\n",product);
if(sum==product){
printf("it is spy number");
}
else{
printf("it is not a spy number");
}
return 0;
}
