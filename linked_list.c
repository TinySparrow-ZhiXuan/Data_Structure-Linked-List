#include <stdio.h>
#include <stdlib.h>
struct Node {
   int item;
   struct Node *next;
};
int main()
{
    struct Node *cur,*pre,*head;
    int i;
    for(i=0;i<5;i++)
    {
     cur=(struct Node*)malloc(sizeof(struct Node)); //calloc 可以直接初始化空間為0
     cur->next=NULL; //memory initialization
     printf("Please enter the data in Node\n");
     scanf("%d",&(cur->item));
     
     if(i==0)
     {
        head=cur;
     }else
     {
         pre->next=cur;
     }
     pre=cur;
    }
    cur=head;
    while(cur!=NULL)
    {
        printf("%d",cur->item);
        cur=cur->next;
    }
    return 0;
}
