/* Given the array of size n, [i]th element of the array represent no of apples held by [i]th student. 
Given a no 'm' which is minimum no of apples each student should have.
Find total no of apples which are needed to be distributed to the students o complete the minimum requirements.
I/P: n=6; m=8; arr=[4,8,3,2,1,8]
O/P: 22 (total required apples= 4+0+5+6+7+0=22) */

#include<stdio.h>
int main()
{
   int i,a[100],m,x,n,sum=0;
   
   printf("Enter array size: ");
   scanf("%d",&n);
   printf("Enter m value: ");
   scanf("%d",&m);
   
   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
  for(i=0;i<n;i++)
  {
      x=m-(a[i]);
      sum=sum+x;
  }
  printf("no of required apples is: %d",sum);
  return 0;
}



