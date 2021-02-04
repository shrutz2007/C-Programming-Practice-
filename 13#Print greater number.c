/*Print greater number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=0,n2=0;
    printf("Enter the number : ");
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
    {
        printf("%d is small number",n1);
    }
    else
    {
        printf("%d is greater number",n2);
    }
}