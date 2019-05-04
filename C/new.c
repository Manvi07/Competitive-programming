#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct list{
    struct list* next;
    int data;
};
struct list* insert(struct list *l,int val)
{
    struct list*temp=l;
    if(temp==NULL)
    {
        l=(struct list*)malloc(sizeof(struct list));
        l->data=val;
        l->next=NULL;
        return l;        
    }
    while(temp->next)
    {
        temp=(struct list*)temp->next;
    }
    temp->next=(struct list*)malloc(sizeof(struct list));
    temp=(struct list*)temp->next;
    temp->data=val;
    temp->next=NULL;
    return l;    
}
void swap(struct list* l)
{
    if(l==NULL)
    {
        printf("Empty list!\n");
        return;
    }
    int max=l->data;
    struct list* maximum=NULL;
    struct list* minimum=NULL;
    int min=l->data;
    struct list *temp=l;
    while(temp->next)
    {
        if(temp->data>max)
           {
            max=temp->data;
            maximum=temp;
           }
        if(temp->data<min)
           { 
            min=temp->data;
            minimum=temp;
           }
        temp=temp->next;
    }
    // printf("%d %d\n",min,max );
    int t;
    t=minimum->data;
    minimum->data=maximum->data;
    maximum->data=t;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;struct list* new=NULL;
    while(scanf("%d",&num)==1)
    {
        new=insert(new,num);
    }
    swap(new);
    while(new)
    {
        printf("%d\n", new->data);
        new=new->next;
    }
    return 0;
}
