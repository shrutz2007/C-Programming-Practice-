/*Coversion of temperature into farade */
#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("Enter the value of temperature in celcius :");
    scanf("%f",&f);
    c=0.5567*(f-32);
    printf("Coversion : %f",c);
}