/*For-loop Area and perimeter of circle*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,r,p,i;
    for(i=1;i<=3;i++)
    {
        printf("Enter the radius of circle :");
        scanf("%d",&r);
        p=2*3.14*r;
        a=3.14*r*r;
        printf("\n Area : %d and  Perimeter : %d",a,p);
    }
}