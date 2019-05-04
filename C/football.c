#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int pop(struct list *l)
{
	if(l==NULL)
		{printf("List is empty\n");
			return 0;}
			struct list* temp=l;
			while(temp->next)
			{
				temp=temp->next;
			}
			int g=temp->data;
			free(temp);
			return g;
}

struct list* pop_delete(struct list* l)
{
	if(l==NULL)
		{
			printf("List is empty\n");
			return 0;
		}
		if(l->next==NULL)
		{
			free(l);l=NULL;
			return l;
		}
		struct list* t;
			struct list* temp=l;
			while(temp->next)
			{
				 t=temp;
				temp=temp->next;
			}
			free(t->next);
			 t->next=NULL;
			return l;	
}

int getlength(struct list *l)
{
    int n=0;
    while(l)
    {
        l=(struct list*)l->next;
        n++;
    }
    return (n);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		struct list* h=NULL;
		int n,p,num=0;char c[10];char a;
		scanf("%d%d",&n,&p);getchar();
		h=insert(h,p);
		for(int i=0;i<n;i++)
			{
				fgets(c,10,stdin);//	
				// printf("%s\n",c);
				if(c[0]=='P')
				{
					sscanf(c,"%c %d",&a,&num);
					// printf("P----%d\n",num );
					h=insert(h,num);
					p=num;
				}
				else if(strcmp(c,"B")==0)
					{p=pop(h);printf("p=%d\n",p );h=pop_delete(h);}
				// printf("dssscz\n");
			}
			printf("%d\n",p );
	}
	return 0;
}