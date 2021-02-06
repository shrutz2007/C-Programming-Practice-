/*Table of 5 using do-while loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=1;
    do
    {
        b=5*a;
        printf("\n 5*%d=%d",a,b);
        a++;
    }while(a<=10);
    
}