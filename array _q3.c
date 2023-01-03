/*GIven an array of size n. Print array elements in alternate fashion.
eg:
I/P: n=8,arr=[1,2,3,4,5,6,7,8]
O/P: 1,3,5,7,2,4,6,8    */

#include <stdio.h>

int main() {
    int n,a[100],i;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
     printf("Enter array elements: ");
     for(i=1;i<=n;i++)
     scanf("%d",&a[i]);
     
     for(i=1;i<=n;i++)
         {
             printf("%d ",a[i]);
             i++;
         }
         
         for(i=2;i<=n;i++)
         {
             printf("%d ",a[i]);
             i++;
         }
     
    return 0;
}
