#include <bits/stdc++.h>
using namespace std;


vector<int> ShortestDist(vector<vector<int> >v, int s)
{
    int n = v.size();
    bool visited[n];
    for(int i=0; i<n; i++)
    {
        visited[i] = false;
        // cout << visited[i] << endl;
    }
    queue<int>q;
    q.push(s);
    vector<int>distance(n, 0);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        visited[u] = true;
        for(int i=0; i<v[u].size(); i++)
        {
            if(visited[v[u][i]] == false)
            {
                distance[v[u][i]] = distance[u] + 6;
                visited[v[u][i]] = true;
                q.push(v[u][i]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        // cout << visited[i] << endl;
        if(visited[i]==false)
        distance[i] = -1;
    }
    return distance;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int> >v(n);
        int a, b;
        for(int i=0; i<m; i++)
        {
            cin >> a >> b;
            v[a-1].push_back(b-1);
            v[b-1].push_back(a-1);
        }
        int s;
        cin >> s;
        vector<int> ans = ShortestDist(v, s-1);
        for(auto i =0; i<n; i++)
        {
            if(i!=s-1)
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}