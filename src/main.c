#include "calculator.h"
#include<stdio.h>
#include<math.h>
 int main(){
 /* long int a,b;
 scanf("%lu%lu",&a,&b);
 printf("Sum is %lu",sum(a,b));
 printf("Sum is %lu",sub(a,b));
 printf("Sum is %lu",mul(a,b));
 printf("Sum is %lu",div(a,b));
 printf("Sum is %lu",mod(a,b));
 printf("Sum is %lu",who(a,b));
 return 0;
 */
    char expression[100];
    double result;

    printf("Enter the Expression: "); scanf("%[^\n]", expression);
    result = evaluate(expression);
    printf("Result = %lf\n", result);
    return 0;
 }
