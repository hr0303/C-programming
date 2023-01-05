/* Given an array, check if it contains only one type f integer or not.
I/P: n=5; arr=[4,4,4,4,4]
O/P: True
I/P: n=3; arr=[1,2,3]
O/P: False   */

#include<stdio.h>
int main()
{
   int i,a[100],n,count=0;
   
   printf("Enter array size: ");
   scanf("%d",&n);
  
   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       if(a[i]==a[i+1])
       {
           count=count+1;
       }
   }
   if(count==n-1)
   printf("True");
   else
   printf("False");
   return 0;
}
