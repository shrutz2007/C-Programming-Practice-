/*Print entered three-digit number reverse*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,rn=0;
    printf("Enter the three-digit number :");
    scanf("%d",&n);
    r=n%10;
    n=n/10;
    rn=rn+100*r;
    
    r=n%10;
    n=n/10;
    rn=rn+10*r;
    
    r=n%10;
    rn=rn+r;
    printf("Reverse of entered three-digit number  : %d",rn);
}