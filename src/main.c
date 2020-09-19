#include "calculator.h"
#include<stdio.h>

 int main(){
 long int a,b;
 scanf("%lu%lu",&a,&b);
 printf("Sum is %lu",sum(a,b));
 printf("Sum is %lu",sub(a,b));
 printf("Sum is %lu",mul(a,b));
 printf("Sum is %lu",div(a,b));
 printf("Sum is %lu",mod(a,b));
 printf("Sum is %lu",who(a,b));
 return 0;
 
    
 }
