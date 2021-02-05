/*Factorial*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int f=1,i=1,n=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("Factorial : %d",f);;
}