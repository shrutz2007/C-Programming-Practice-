/*Table*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,r,n;
    printf("Enter the table you wanted to print :");
    scanf("%d",&n);
    while(i<=10)
    {
        r=n*i;
        printf("%d*%d=%d",n,i,r);
        i++;
        printf("\n");
    }
}