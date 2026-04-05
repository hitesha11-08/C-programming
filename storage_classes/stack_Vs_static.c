#include<stdio.h>
int main()
{
static int age=22;
int num =45;
printf("address of static var=%p",&age);
printf("address of num  var=%p",&num);
return 0;
}
