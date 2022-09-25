//Average of 3 numbers

#include <stdio.h>

void main()
{
    int a,b,c;
    float average;
    
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    printf("Enter 2nd number:  ");
    scanf("%d",&b);
    printf("Enter 3rd number:  ");
    scanf("%d",&c);
    
    average=(a+b+c)/3;
    printf("Average of 3 numbers is :%.2f ",average);
}
