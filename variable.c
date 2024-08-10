#include<stdio.h>
int main()
{
int x; //declaration
x = 123; //initialization
int y = 321; //declaration + initialization

int age= 19; //integer
float gpa = 4.86896784564675687; //floating point number    4 bytes 32 bits 6 to 7 digits %f
double cgpa = 4.8678456763895456856; //       8 bytes 64 bits 15 to 16 digits %lf
char grade = 'A'; //singla character         
char name[] = "RIthen"; //array of characters

printf("Hello %s\n",name);     //%s= string
printf("You are %d years old\n",age);  //%d= decimal
printf("Your gpa is %0.16f\n",gpa);  //%f = floating number
printf("Your gpa is %0.16lf\n",cgpa);
printf("Your average grade is %c",grade); //%c = character 


    return 0;
}