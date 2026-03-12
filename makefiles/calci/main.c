#include<stdio.h>
int main()
{
int a,b,choice;
printf("enter a number :a = ");
scanf("%d",&a);
printf("enter a number :b = ");
scanf("%d",&b);
printf("choice:1.add 2.sub 3.mul 4.div");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("results=%d",add(a,b));
break;
case 2:
printf("results=%d",sub(a,b));
break;
case 3:
printf("results=%d",mul(a,b));
break;
case 4:
printf("results=%d",div(a,b));
break;
default:
 printf("Invalid choice");
break;
}
return 0;
}
