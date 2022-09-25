/*
I/P = 4
O/P = 2 * * * 
      * 4 * * 
      * * 8 * 
      * * * 16  
*/



#include <stdio.h>
#include <math.h>

int main() 
{
    int i,j,n,a,b;
    scanf("%d",&n);
     b=1;
    
   
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a= pow(2,b);
            if(j==i){
                printf("%d ",a);
                b++;
              }
            else{
                printf("* ");
            }
             
        }
        printf("\n");
       
    }
}
