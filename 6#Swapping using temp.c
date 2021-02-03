/*Swapping a and b using temp*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,t;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("A=%d and B=%d",a,b);
}