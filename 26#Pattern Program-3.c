#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,n=0,c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=n;j++)
        {
            c++;
            printf("%d ",c);
        }
    }
}