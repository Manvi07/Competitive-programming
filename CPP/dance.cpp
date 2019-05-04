#include<bits/stdc++.h>
using namespace std;


int n;
vector<list<int> > l;
bool *visited;
void dfs(int src)
{   
    // cout << "--";
    cout << src + 1<< " ";
    visited[src] = true;
    for(auto it = l[src].begin(); it!=l[src].end(); it++)
    {
        // cout << *it << endl;
        if(!visited[*it])
        dfs(*it);
    }
}

int main()
{
    cin >> n;
    int v1[n], v2[n];
    l.resize(n);
    for(int i=0; i<n; i++)
    {
        cin >> v1[i] >> v2[i];
        l[v1[i]-1].push_back(v2[i]-1);
        l[v2[i]-1].push_back(v1[i]-1);
    }
    visited = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i] = false;
        // for(auto j : l[i])
        // cout << "--" << j << " " ;
        // cout<< visited[i];
        // cout << endl;
    }
    dfs(0);
    cout << endl;
    return 0;
}