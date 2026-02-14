#include<stdio.h>
enum error{OK,NOT_FOUND,ACCESS_DENIED};
int main(){enum error e=NOT_FOUND;if(e==OK)printf("No Error");else if(e==NOT_FOUND)printf("Not Found");else printf("Access Denied");return 0;}