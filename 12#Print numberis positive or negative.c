/*Print numberis positive or negative*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("%d is negative number",n);
    }
    else
    {
        printf("%d is positive number",n);
    }
}