#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n, k;
    cin >> n >> k;
    int l, r;
    int c=0;
    bool a[k] = {false};
    for(int i=0;i<n;i++)
    {
        cin >> l >> r;
        // cout << l << r << endl;
        for(int j=l;j<=r;j++)
        {
            if(a[j-1]==false)
            {
                a[j-1]=true;
            }
        }
    }
    
    vector<int> v;
    for(int i=0;i<k;i++)
    if(!a[i])
    {
        v.push_back(i+1);
    }

    cout << v.size() << endl;
    if(!v.empty())
    {for(auto i : v)
    cout << i << " ";
    cout << endl;}
}