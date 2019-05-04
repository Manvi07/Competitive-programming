#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int visited[12];
int a[12][12];int Q[1000]={0};
int front=-1,rear=-1;

char temp[12][3];
void insert_queue(int vertex)
{


        if(front == -1)
            front = 0;
        rear = rear+1;
        Q[rear] = vertex ;
}

int isEmpty_queue()
{
    if(front == -1 || front == 1+rear)
        return 1;
    else
        return 0;
}

int delete_queue()
{
    int delete_item;
    if(front == -1 || front ==1+ rear)
    {
        printf("Queue Underflow\n");
        exit(1);
    }

    delete_item = Q[front];
    front = front+1;
    return delete_item;
}
int p[12];
void BFS(int s,int n,int d)
{
  p[s]=-1;
    insert_queue(s);
    visited[s]=1;
    while(!isEmpty_queue())
    {
        int v = delete_queue( );
        for(int i=0; i<n; i++)
        {
            if(a[v][i] == 1 && visited[i] == 0)
            {
                insert_queue(i);
                visited[i] = 1;
                p[i]=v;
            }
        }
    }
    char x[12][3];
    int i=d,j=-1;
    while(p[i]!=s)
    {
      j++;
      strcpy(x[j],temp[p[i]]);
      i=p[i];
    }
    for(int k=j;k>=0;k--)
    printf("%s ",x[k] );
}
void insertedge(int s,int d)
{
	a[s-1][d-1]=1;
	a[d-1][s-1]=1;
}
void creategraph()
{
	insertedge(1,2);
	insertedge(2,3);
	insertedge(3,4);
	insertedge(2,4);
	insertedge(5,6);
	insertedge(3,5);
	insertedge(3,9);
	insertedge(3,7);
	insertedge(7,8);
	insertedge(9,12);
	insertedge(11,12);
	insertedge(9,7);
	insertedge(10,11);
	insertedge(8,10);
	insertedge(10,5);
	insertedge(8,12);
}

int main()
{
	char s[3];
	char d[3];
	int src,dest;
	scanf(" %s %s",s,d);
	char name[12][3]={"MN","CH","DL","DD","KL","GU","BH","HY","MU","CN","KK","GO"};
	for(int i=0;i<12;++i)
		{
      strcpy(temp[i],name[i]);
			if(strcmp(name[i],s)==0)
					{
						src=i;
					}
			if(strcmp(name[i],d)==0)
			{
				dest=i;
			}
		}
	creategraph();
	BFS(src,12,dest);
  printf("\n" );
  return 0;
}
