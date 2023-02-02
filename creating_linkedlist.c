




#include <stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* next;
};                   // link list node;


int main()
{
    struct node *n1,*n2;
    n1=(struct node*)malloc(sizeof(struct node));
    n2=n1;
    n1->val=10;
    int i=1;
    while(i){
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the value of node");
        scanf("%d",&temp->val);
        n2->next=temp;
        n2=n2->next;
        printf("enter 0 to stop and 1 to insert new node");
        scanf("%d",&i);
    }
    n2=n1;
    while(n2!=NULL){
        printf("%d-->",n2->val);
        n2=n2->next;
    }
    return 0;
}
