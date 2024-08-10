#include<stdio.h>
int main()
{
char unit;
float temp;
printf("The temprature is in (C) or (F) ?");
scanf("%c",&unit);

unit =toupper (unit);

if(unit == 'C'){
    printf("Enter temprature in %c :",unit);
    scanf("%f",&temp);
    temp =(((9*temp)/5)-32);
    printf("The temprature is %.1f",temp);
}
else if(unit=='F'){
    printf("Enter temprature in %c",unit);
    scanf("%f",&temp);
    temp =(((5*temp)+160)/9);
    printf("The temprature is %.1f",temp);
}
else{
    printf("\nWhat is that ?");
    printf("\nEnter temprature in (C) or (F)!");
    printf("\nRun the code again");
}





    return 0;
}