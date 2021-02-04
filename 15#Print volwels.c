/*Print volwels*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char volwels;
    printf("Enter the character : ");
    scanf("%c",&volwels);
    if(volwels=='a'||volwels=='e'||volwels=='i'||volwels=='o'||volwels=='u')
    {
        printf("%c is volwel",volwels);
    }
    else
    {
        printf("%c is not volwel ",volwels);
    }
}