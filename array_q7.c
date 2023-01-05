//Given an array of size. Create another array of same size, put elements of first array into second array in reverse order.

#include<stdio.h>
int main()
{
   int i,j,a[100],b[100],n;
   
   printf("enter array size: ");
   scanf("%d",&n);
   
   printf("Enter array elements: ");
   for(j=0;j<n;j++)
   {
       scanf("%d",&b[j]);
   }
   i=0;
   
   for(j=n-1;j<n;j--)
   {
        if(j<0)
        {
             break;
        }
        a[i]=b[j];
        i++;
   }
   printf("elements in second array are: ");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   return 0;
}
       
