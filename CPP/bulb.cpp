#include <bits/stdc++.h>
using namespace std;

int switchesNo, bulbsNo;
bool check(bool a[])
{
    for(int i=0;i<bulbsNo; i++)
    if(a[i] == true)
    return false;
    return true;
}

void Switch(bool &p)
{
    if(p == false)
    p = true;
    else
    p = false;
}

bool compare(bool a[], bool b[])
{
    for(int i=0; i<bulbsNo; i++)
    if(a[i]!=b[i])
    return false;
    return true;
}

int main()
{
    cin >> switchesNo >> bulbsNo;
    bool a[bulbsNo] = {false};
    int l;
    cin >> l;
    int p;
    for(int i=0;i<l;i++)
    {
        cin >> p;
        a[p-1] = true;
    }
    int k;
    vector< vector<int> >v(switchesNo);
    for(int i=0; i < switchesNo; i++)
    {
        cin >> k;
        v[i] = vector<int>(k);
        for(int j=0; j<k; j++)
        cin >> v[i][j];
    }
    bool b[bulbsNo];
    for(int i=0; i<bulbsNo; i++)
    b[i] = a[i];

    int g = 0;
    int ans = 0; 
    while(!check(a))
    {
        for(int i=0; i<switchesNo; i++)
        {
            for(int j=0; j<v[i].size(); j++)
                {
                    Switch(a[v[i][j]-1]);
                }
                ans++;
                if(check(a))
                break;
        }
        if(compare(a,b))
        break;
    }
    if(!check(a))
    cout << -1 << endl;
    else
    cout << ans << endl;
    return 0;
}