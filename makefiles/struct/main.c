#include <stdio.h>
#include "struct.h"
int main()
{
int choice;
while(1)
{
printf("\n1.Add\n2.Search\n3.Display\n4.Exit\n");
scanf("%d",&choice);
switch(choice){
case 1: 
addStudent(); 
break;
case 2: 
searchStudent(); 
break;
case 3:
displayStudents();
break;
case 4:
printf("exiting");
return 0;
}
}
}
