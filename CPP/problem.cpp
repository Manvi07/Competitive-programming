#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int p, s;

int count(vector<pair<int, int> >v)
{
    int c=0;
    for(int i=1; i<s; i++)
    if(v[i].second< v[i-1].second)
    c++;
    return c;
}


int main()
{
    $    
    cin >> p >> s;
    int a[s], b[s];
    vector<pair<int, int> >ans;
    for(int j=0;j<p;j++)
    {
        vector<pair<int, int> > v;
        for(int i=0; i<s; i++)
        cin >> a[i];
        for(int i=0; i<s; i++)
        {cin >> b[i];
        v.push_back(make_pair(a[i],b[i]));}
        // cout << endl;
        // for(int i=0; i< s; i++)
        // cout << v[i].first << " " << v[i].second << endl;
        sort(v.begin(), v.end());
        // cout <<"--------------\n";
        // for(int i=0; i< s; i++)
        // cout << v[i].first << " " << v[i].second << endl;

        // cout <<"--------------\n";
        ans.push_back(make_pair(count(v), j+1));       
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<p ; i++)
        cout << ans[i].second << endl;
}