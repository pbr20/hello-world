#include<stdio.h>

int main ()
{
    int r;
printf("Enter your roll");
scanf("%d",& r);
if(r<=400&&r>=301)
printf("Your group D");
else if(r<=300&&r>=201)
printf("Your group C");
else if(r<=200&&r>=101)
printf("Your group B");
else if(r<=100&&r>=1)
printf("Your group A");
else
printf("Invalid number");
return 0;




}



    