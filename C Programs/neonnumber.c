#include <stdio.h>
int main() 
    {
        int sum=0;
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    int sqr= a*a;
    printf("square of the number is :%d\n",sqr);
    while(sqr!=0) {
    int last = sqr%10;
    sum = sum+last;
    sqr= sqr/10;}
    printf("the sum of number is : %d\n",sum);
    if (sum==a)
    {
        printf("its a neon number:%d",a);
    }
    else
    {
        printf("its not a neon number:%d",a);
    }
    return 0;
}
