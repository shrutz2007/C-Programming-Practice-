/*Addition Substraction Multiplication Division Program*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Addition : %d",c);
    c=a-b;
    printf("\n Substraction : %d",c);
    c=a*b;
    printf("\n Multiplication : %d",c);
    c=a/b;
    printf("\n Division : %d",c);
}