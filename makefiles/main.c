#include <stdio.h>
#include <math.h>
int main()
{
float num,root,power;
printf("Enter number: ");
scanf("%f",&num);
root=sqrt(num);
power=pow(num,2);
printf("Square root = %f\n",root);
printf("Power = %f\n",power);
return 0;
}
