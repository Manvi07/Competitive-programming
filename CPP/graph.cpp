#include <bits/stdc++.h>
using namespace std;
void create();
void bfs();
void dfs();
struct node{
  int data,status;
  struct node* next;
  struct link*adj;
};
struct link{
  struct node* next;
  struct link*adj;
};
struct node *start,*p,*q;
struct link *l,*k;
int main()
{

}
void create()
{
  int dat,flag=0;
  start=NULL;
  cout<<"Enter the nodes in the graph: ";
  while(1)
  {
    cin>>dat;
    if(dat==0) break;
    p=new node;
    p->data=dat;
    p->status=0;
    p->next=p->adj=NULL;
    if(flag==0)
    {
      start=p;
      q=p;
      flag++;
    }
    else
    {
      q->next=p;
      q=p;
    }
  }
    p=start;
    while(p!=NULL)
    {
      cout<<"Enter the links to :"<<p->data;
      flag=0;
      while(1)
      {
        std::cin >>dat ;
        if(dat==0)
        break;
        k=new link;
        k->adj=NULL;
        if(flag==0)
        {
          p->adj=k;
          l=k;
          flag++;
        }
        else
        {
          l->adj=k;l=k;
        }
        q=start;
        while(q!=NULL)
        {
          if(q->data=dat)
          k->next=q;
          q=q->next;
        }
      }
      p=p->next;
    }
    cout"----------\n";
    return;
  }
