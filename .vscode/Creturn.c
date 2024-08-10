#include<stdio.h>
double square(double x ){
return x*x;
}
double cube(double a){
    return a*a*a;
}


int main()
{
    char operator ;
    double num1, result;
    
    printf("what operation you want to do (Square) or (Cube)?");
    scanf("%s", &operator);
          operator =toupper (operator);  
        switch(operator){ 
            case 'S':
                printf("Enter the number to square it");
                scanf("%lf",&num1);
                result=square(num1);
                printf("Ans: %.2lf",result);
                break;

            case 'C':

                printf("Enter the number to cube it");
                scanf("%lf",&num1);
                result = cube(num1);
                printf("Ans: %.2lf", result);
                break;

            default   :
                printf("Enter only valid operator");

        }
    

return 0;
}