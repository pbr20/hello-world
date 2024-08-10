#include<stdio.h>
#include<stdbool.h>
int main()
{
    // logical operator: && (AND) cheacks if two conditions are true
float temp= 23;
bool sunny =true;
if(temp >= 0 && temp <= 35 && sunny){
printf("The wheather is good");

}
else{
    printf("The wheather is bad");
}



    return 0;
}