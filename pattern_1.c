/*Program to print the given pattern
I/P = 4
O/P =1 
     2 3 
     4 5 6 
     7 8 9 10  */


#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
            
        }
         printf("\n");
    }
   
    }
