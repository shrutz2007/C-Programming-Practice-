/*Print squares from 1-20*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,a=0,b=0,c=0;
    a=11;
    b=11;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    while(i<=20)
    {
        c=a*b;
        printf("%d*%d=%d",a,b,c);
        a++;
        b++;
        i++;
        printf("\n");
    }
}