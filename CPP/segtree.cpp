#include <iostream>
using namespace std;

void build(int node, int start, int end)
{
  if(start == end)
  {
    tree[node] = A[start];
  }
  else
  {
    int mid = (start+end)/2;
    build(2*node, start, mid);
    build(2*node + 1, mid+1, end);
    tree[node] = min(tree[2*node], tree[2*node+1]);
  }
}

void update(int node, int start, int end, int index, int val)
{
  if(start == end)
  {
    A[index] = (val);
    tree[node] =(val);
  }
  else
  {
    int mid = (start+end)/2;
    if(start <= index and index <= mid)
    {
      update(2*node, start, mid, index, val);
    }
    else
    {
      update(2*node+1, mid+1, end, index, val);
    }
    tree[node] = min(tree[2*node], tree[2*node+1]);
  }
}

int query(int node, int start, int end,int l, int r)
{
  if(r < start or end < l)
  {
    return 0;
  }
  if(l<=start and end <= r)
  {
    return tree[node];
  }
  int mid = (start+end)/2;
  int p1 = query(2*node, start, mid, l, r);
  int p2 = query(2*node+1, mid+1, end, l, r);
  return min(p1, p2);
}

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i=0; i<n; i++)
    cin >> a[i];
    char c;
    int x, y;
    while(q--)
    {
        cin >> c >> x >> y;
        if(c == q)
        {
          cout <<query(node, )
        }
        else
        {

        }
    }
    return 0;
}
