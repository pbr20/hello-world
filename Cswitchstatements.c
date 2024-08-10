#include<stdio.h>
int main()
{

    // switch = A more efficient alternative to using many "else if" statements
//                 allows a value to be tested for equality against many cases


char grade;
printf("Enter your grade :");
scanf("%c", &grade);
switch(grade){
    case 'A':
        printf("Perfect!");
            break;
    case 'B':
        printf("It's good");
            break;
    case 'C':
        printf("It's okay");
            break;
    case 'D':
        printf("Atleast it's not F");
            break;
    case 'F' :
        printf("Better luck next time !");
            break;
    default :
        printf("Enter only valid grades!");

                        





}





    return 0;
}