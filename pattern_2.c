/*
I/P = 4 (no. of rows)
O/P = A 
      B C 
      D E F 
      G H I J    */



#include <stdio.h>

int main() {
    int i,j,n;
    char c='A';
 
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
}



// If input is taken for LAST CHARACTER TO BE PRINTED
// Input is case sensitive (O/P will be different for j & J); it will follow ascai order.

#include <stdio.h>

int main() {
    int i,j,m;
    char c,n;
    c='A';
    printf("ENTER THE LAST CHARACTER TO BE PRINTED ");
    scanf("%c",&n);
    
    for(i=1;;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(c<=n){
                printf("%c ",c);
                c++;
            }
            else
                break;
        }
        printf("\n");
    }
    
}
