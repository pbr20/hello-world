#include<stdio.h>
#include<stdbool.h>
int main()
{
    // logical operators || (OR) cheacks if only one condition is true
float temp= 21;
bool cloudy= true;
if(temp>=35 || temp <= 0 || cloudy)
{
    printf("\a\aThe wheather is bad !");
}
else{
    printf("The wheather is good !");
}
    return 0;
}