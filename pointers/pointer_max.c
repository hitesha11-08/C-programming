#include<stdio.h>
int findMax(int *ptr, int size)
{
int max = *ptr;
for(int i = 1; i < size; i++){
ptr++;
if(*ptr > max)
{
max = *ptr;
 }
}
return max;
}
int main()
{
int arr[5] = {10, 45, 23, 89, 34};
int max;
max = findMax(arr, 5);
printf("Maximum element = %d", max);
return 0;
}
