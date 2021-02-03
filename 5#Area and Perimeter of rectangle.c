/*Area and perimeter of rectangle*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("Enter length and breadth of rectangle : ");
    scanf("%f%f",&length,&breadth);
    area=length+breadth;
    perimeter=2*(length+breadth);
    printf("Area of rectangle : %f and Perimeter : %f",area,perimeter);
}