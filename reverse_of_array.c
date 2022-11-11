include <stdio.h>
int main()
{
    int a[50];
    int i,n;
    printf("enter size of the array ");
    scanf("%d",&n);
    printf("enter the elements of the array ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=n;i<=n;i--)
    {
        printf("%d ",a[i]);
        if(i==1)
        break;
    }
    
}
