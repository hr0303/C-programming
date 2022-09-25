#include <stdio.h>
int main()
{
    char c ;
    
    for(c='A';c<='Z';c++)
    {
        printf("%c ",c);
       
       
    }
}



// For printing alphabets from A to desired aplhabet

#include <stdio.h>
int main()
{
    char c,n;
    scanf("%c",&n);
    for(c='A';c<=n;c++)
    printf("%c ",c);
}
