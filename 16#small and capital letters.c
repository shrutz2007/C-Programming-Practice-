/*small and capital letters*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char s;
    printf("Enter the character : ");
    scanf("%c",&s);
    if(s=='a'&&s=='z')
    {
        printf("%c is small letter",s);
    }
    else
    {
        printf("%c is capital letter ",s);
    }
}