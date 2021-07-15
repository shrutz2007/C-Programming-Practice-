/*Structure input and output*/

#include<stdio.h>
struct students{
    char a;
    int n;
    float f;
}s;
void main(){
    printf("Enter the value of a,n and f : ");
    scanf("%c%d%f",&s.a,&s.n,&s.f);
    printf("\n Entered values are %c \t %d \t %f ",s.a,s.n,s.f);
    return 0;
}