/*Print area and perimeter of circle*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float area,radius,perimeter;
    printf("Enter the radius of circle :");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("Area of circle : %f and Perimeter : %f",area,perimeter);
}