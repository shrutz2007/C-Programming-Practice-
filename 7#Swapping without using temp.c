/*Swapping a and b */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A=%d and B=%d",a,b);
}