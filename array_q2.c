//Given an array of size n. Find average of array.

#include <stdio.h>

int main() {
    int n,a[100],i,even=0,odd=0;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
     printf("Enter array elements: ");
     for(i=1;i<=n;i++)
     scanf("%d",&a[i]);
     
     for(i=1;i<=n;i++)
     {
         if(a[i]%2==0)
         even=even+1;
         else
         odd=odd+1;
     }
     
     printf("No of even elements in the array= %d",even);
     printf("\nNo of odd elements in the array= %d",odd);
    return 0;
}
