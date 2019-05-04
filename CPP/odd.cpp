#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    $
    int n, m;
    cin >> n >> m;
    int a;
    vector<int> e;
    vector<int> o;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a%2==0)
        e.push_back(a);
        else
        o.push_back(a);
        if(a==0)
        flag = true;
    }
    ll ans;
    if(m%2!=0)
    {
        if(flag==false)
        ans = pow(o.size(),(m/2))*pow(e.size(),((m/2)+1));
        else
        ans = pow(o.size(),(m/2))*pow(e.size(),(m/2))*(e.size()-1);
    }
    else
    {
        if(flag==false)
        ans = pow(o.size(),(m/2))*pow(e.size(),(m/2));
        else
        ans = pow(o.size(),(m/2))*pow(e.size(),(m/2-1))*(e.size()-1);
    }
    cout << ans << endl;

}