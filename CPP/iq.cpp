#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    int a;
    vector<int>e;
    vector<int>o;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a%2==0)
        e.push_back(i+1);
        else
        o.push_back(i+1);
    }
    if(o.size()<e.size())
    cout << o[0] << endl;
    else
    cout << e[0] << endl;
    return 0;
}