/*
I/P = 4
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
