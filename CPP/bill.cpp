#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n, m;
    cin >> n >> m;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    cin >> a[i];

    queue<int>q;

    int p;

    for(int i=0;i<m;i++)
    {
        cin >> p;
        q.push(p);
    }

    int c = 0;
    

    for(int i=0;i<n and !q.empty();i++)
    {
        if(q.front()>=a[i])
        {
            q.pop();
            c++;
        }
    }
    cout << c << endl;
    return 0;
}