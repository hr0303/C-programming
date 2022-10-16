//TO CHECK WHETHER THE GIVEN NO IS PRIME R NOT 

#include <stdio.h>

int main() {
    int a,i;
    float n;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
       n= a % i;
        if(n==0)
        {
            printf("no is not prime \n");
            
            break;
        }
        else 
        {
            printf("no is prime \n");
            break;
        }
    }

    return 0;
}
