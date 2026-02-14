#include<stdio.h>
enum error{SUCCESS,FAIL,WARNING};
int main(){
enum error e=FAIL;
if(e==SUCCESS)printf("Success");
else if(e==FAIL)printf("Fail");
else printf("Warning");
return 0;
}