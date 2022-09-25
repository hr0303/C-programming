//Find absolute value of a given number 

#include <stdio.h>

void main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a>=0){
        printf("%d",a);
    }
    else{
        int b=a*(-1);
        printf("Absolute value = %d",b);
    }
}
