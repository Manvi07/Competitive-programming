#include<bits/stdc++.h>
using namespace std;

vector<int>visited;

vector<int> DFS(vector<vector<int> >v, int s)
{
    visited[s] = true;
    stack<int>st;
    st.push(s);
    vector<int> ans;
    while(!st.empty())
    {
        int u = st.top();
        ans.push_back(u);
        st.pop();
        visited[s]=true;
        for(int i=0; i<v[u].size(); i++)
        {
            if(visited[v[u][i]] == false)
            {
                st.push(v[u][i]);
                visited[v[u][i]] = true;
            }
        }
    }
    return ans;
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
        visited.clear();
        visited.assign(n, false);
        for(int i=0; i<m; i++)
        {
            cin >> a >> b;
            v[a-1].push_back(b-1);
            v[b-1].push_back(a-1);
        }
        int s;
        cin >> s;
        vector<int> ans = DFS(v, s-1);
        for(auto i =0; i<ans.size(); i++)
        {
            // if(i!=s-1)
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}