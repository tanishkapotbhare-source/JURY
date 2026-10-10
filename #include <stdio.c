#include <stdio.h> 
#define Pi 3.14159
int main()
{
    float radius,area
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area=Pi*radius*radius;
    printf("Area of the circle=%.2f\n",area);
    return 0
}