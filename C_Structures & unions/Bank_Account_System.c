#include <stdio.h>
struct Bank{int acc;float bal;};
int main(){
    struct Bank b={101,1000};float amt;
    scanf("%f",&amt);b.bal+=amt;
    scanf("%f",&amt);b.bal-=amt;
    printf("Balance=%.2f",b.bal);
    return 0;
}