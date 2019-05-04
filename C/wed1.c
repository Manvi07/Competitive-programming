#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct list {
    int data;
    struct list* next;
};

struct list* insert(struct list *l,int val)
{
    struct list* temp=l;
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

int searchnum(struct list* l,int n)
{
    struct list* temp=l;
    while(temp)
    {
        if(temp->data==n)
            return n;
        temp=temp->next;
    }
    return 0;
}

void search(struct list* l,int n)
{
    struct list* p=l;
    struct list* temp=l;
    int t=l->data;
    while(p->next)
    {
        if(searchnum(temp,n-t))
        {printf("%d %d\n",t,n-t);p=p->next;t=p->data;temp=p->next;}
    else if(temp->next==NULL)
    	{p=p->next;t=p->data;temp=p;}
        else temp=temp->next;
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    struct list* l=NULL;
    int num;
    while(scanf("%d",&num)==1)
    {
        l=insert(l,num);
    }
    getchar();getchar();getchar();
    int q;
    scanf("%d",&q);
    search(l,q);
    return 0;
}
