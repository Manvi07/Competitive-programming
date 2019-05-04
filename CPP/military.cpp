#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int *visited;
list<int> *l;
int *Size;
vector<int>res;

void DFS(int n,int src)
{
    visited[src]=1;
    res.push_back(src);
    for(auto i : l[src])
    if(visited[i]==0)
    {
        DFS(n,i);
        Size[src]+=Size[i];
    }
}

int main()
{
    $
    int n, q;
    cin >> n >> q;
    l = new list<int>[n];
    visited = new int[n];
    Size = new int[n];
    fill_n(Size, n, 1);
    int a;
    for(int i=1; i<n; i++)
    {
        cin >> a;
        l[a-1].push_back(i);
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(auto j : l[i])
    //     cout << j+1 << " ";
    //     cout << endl;
    // }
    map<int,int>m;
    
    for(int i=0;i,n;i++)
    {
        m[i]+=i;
    }

    res.clear();
    fill_n(visited, n , 0);
    DFS(n,0);
    int u,k;
    while(q--)
    {
        cin >> u >> k;
        if(k<=Size[u-1])
        cout << res[m[u-1]+k-1] << endl;
        else cout << -1 << endl;
    }
    return 0;
}