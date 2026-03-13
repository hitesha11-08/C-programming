#include<stdio.h>
#include"fibo.h"
void fibo(int n, int t1, int t2, int next){
        printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        next= t1 + t2;
        t1 = t2;
        t2 = next;
    }
 
}
