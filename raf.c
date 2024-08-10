#include<stdio.h>
int main()
{
int age;
char name[30];
printf("What's your name ?");
fgets(name ,25 ,stdin);
printf("HI! %s .How old are you ?",name);
scanf("%d",&age);
printf("You are %d years old %s",age,name);
    return 0;
}