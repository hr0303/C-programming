/* Given an array of size n, remove consecutive duplicate elements.
I/P: n=5; arr=[1,2,2,2,3,1]
O/P: [1,2,3,1]  */

#include<stdio.h>
int main()
{
   int i,a[100],n;
   
   printf("Enter array size: ");
   scanf("%d",&n);
  
   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
 
   for(i=0;i<n;i++)
   {
       if((a[i])!=(a[i+1]))
       {
         printf("%d ",a[i]);  
       }
   }
   return 0;
}
