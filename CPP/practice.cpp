#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n, k;
    cin >> n >> k;
    long long a[n][2];
    vector<long long>v;
    vector<long long>v1;
    vector<long long>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin >> a[i][0];
        a[i][1]=0;
        v.push_back(a[i][0]);
    }
    long long sum=0;

    sort(v.begin(),v.end(),greater<int>());

    for(int i =0;i<k;i++)
    {
        sum += v[i];
        for(int j=0;j<n;j++)
        if(v[i]==a[j][0] and a[j][1]==0)
        {
            a[j][1]=1;
            v1.push_back(j);
            break;
        }
    }
    sort(v1.begin(),v1.end());
    cout << sum << endl;
    int g;
    // for(auto i: v1)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    for(int i=0;i<k and v1.size()>1;i++)
    {
        if(i!=0 and  i<k-1)
        g = v1[i+1]-v1[i];
        else if(i==0)
        g = v1[i+1];
        else
        g = n-v1[i];
        cout << g << " ";
    }

    if(v1.size()==1)
        cout << n;
    cout << endl;
    return 0;
}