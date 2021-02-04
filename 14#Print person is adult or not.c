/*Print Person adult or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int age=0;
    printf("Enter the age of Person : ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("%d is not adult",age);
    }
    else
    {
        printf("%d is adult ",age);
    }
}