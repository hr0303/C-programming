//Find area of circle with given value of radius


#include <stdio.h>
#define Pi 3.14

void main()
{
    float radius,area;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    
    area=Pi*radius*radius;
    printf("Area of circle is :%f",area);
}
