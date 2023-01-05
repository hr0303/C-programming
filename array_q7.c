/* Given an array of size n, create another array of prefix sum.
I/P: n=5; arr=[1,2,3,4,5]
O/P: res=[1,3,6,10,15]  */

#include <stdio.h>

int main() {
    int n,a[100],i,b[100],sum=0,j=0;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
     printf("Enter array elements: ");
     for(i=1;i<=n;i++)
     scanf("%d",&a[i]);
     
     printf("resultant array is :");
     for(i=1;i<=n;i++)
     {
         sum=sum+a[i];
         b[j]=sum;
         j++;
     }
     for(j=0;j<n;j++)
     {
         printf("%d ",b[j]);
     }
     return 0;
}
