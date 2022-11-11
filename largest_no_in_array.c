#include <stdio.h>
int main()
{
int a[50];
int i ,A=0,n;
printf("enter size of the array:  ");
scanf("%d",&n);
printf("enter array elements ");
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
    if(a[i]<a[i+1])
   {
      A= a[i+1];
   }
   else
   A=a[i];
}
    printf("largest no is %d",A);
    
}
