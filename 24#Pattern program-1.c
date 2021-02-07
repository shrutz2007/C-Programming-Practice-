/*Pattern program-1*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0,j=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
}