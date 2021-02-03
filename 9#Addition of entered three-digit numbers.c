/*Addition of entered numbers */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,s=0;
    printf("Enter the value of three-digit number :");
    scanf("%d",&n);
    r=n%10;
    n=n/10;
    s=s+r;
    
    r=n%10;
    n=n/10;
    s=s+r;
    
    r=n%10;
    n=n/10;
    s=s+r;
    printf("Addition of entered three-digit number  : %d",s);
}