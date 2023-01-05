// Given array of size n, find largest no in array 


#include<stdio.h>
int main()
{
    int a[100],i,n,max=0;
    
    printf("enter array size: ");
    scanf("%d",&n);
    
    printf("enter array elements: ");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("The largest element of the aarray is: %d",max);
    
}      
