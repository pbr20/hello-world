#include<stdio.h>
int main ()
{
char operator;
double num1;              
double num2;
double result;

    printf("\nEnter an operator (+,-,*,/)");
    scanf("%C",&operator);

    printf("Enter the first number :");
    scanf("%lf",&num1);

   
    printf("\nEnter the second number");
    scanf("%lf",&num2);

switch(operator){

    case '+':
    result= (num1 +num2);
    printf("Result = %.2lf",result);
    break;

    case '-':
    result=(num1 -num2);
    printf("Result =%.2lf",result);
    break;

    case '*':
    result= (num1 * num2);
    printf("Result =%.2lf",result);
    break;

    case '/' :
    result = (num1 / num2);
    printf("Result =%.2lf",result);
    break;

    default :
    printf("Your operator %c",operator);
    printf("\nEnter only valid operator (+,-,*,/)");
    break;
}





    return 0;
}