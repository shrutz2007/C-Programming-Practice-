#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
    }
}