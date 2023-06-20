//PROGRAM TO COUNT NUMBER OF DIGITS IN AN INTEGER

#include <stdio.h>
int digitsCount(int i){
    if((i/10)==0){
        return 1;
    }
    int ans= digitsCount(i/10);
    return ans+1;
}
int main() {
    int n,value;
    printf("enter n ");
    scanf("%d",&n);
    value=digitsCount(n);
    printf("%d",value);
    return 0;
}
