#include<stdio.h>
int main(){
char str[]={"hitesha"};
char vowels[]="{aeiouAEIOU}";
char *p=str;
int i,j=0,count=0;
while(*(p+j)!='\0'){
for(i=0;vowels[i]!='\0';i++){
if(*(p+j)==vowels[i]){
count++;
}
}
j++;
}
printf("number of vowels=%d\n",count);
return 0;
}

