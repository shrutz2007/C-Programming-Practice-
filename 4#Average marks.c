/*Calculate the average marks*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,e,f;     /*a,b,c,d,e are the subjects*/
    printf("Enter the marks of of subjects :");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    printf("Average marks : %f",f);
}