#include<stdio.h>

void bday (char x [] , int y) //All the words inside this 1st bracket of bday function are called argument here char x[] & int y are arguments
{
printf("Happy birthday dear %s\n ", x);
printf("You are %d years old!\n",y);

}
int main()
{
char name[] = "Rithen";
int age= 19;
bday(name ,age);
return 0;
}