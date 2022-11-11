//Average of an array given as input

#include <stdio.h>
int main()
{
    int a[50];
    int sum=0, i,n;
    float average=0;
    printf("enter size of the array ");
    scanf("%d",&n);
    printf("enter the elements of the array ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum= %d ",sum);
    average=(sum/n);
    printf("\naverage of elements of the array is = %.2f ",average);
    
}
