#include <bits/stdc++.h>
using namespace std;

int switchesNo, bulbsNo;
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
    int k, m;
    vector< vector<int> >v(2*switchesNo);
    for(int i=0; i < 2*switchesNo; i++)
        v[i] = vector<int>(bulbsNo, 0);
    for(int i=0; i < switchesNo; i++)
    {
        cin >> k;
        
        for(int j=0; j<k; j++)
        {
            cin >> m;
            v[i][m-1] = 1;
        }
        
    }

for(int j=0;j<switchesNo; j++)
if(a[j]==true)
{
    v[0][j]--;
}
for(int i=1; i < 2*switchesNo; i++)
    for(int j=0; j<bulbsNo; j++)
        v[i][j] += v[i-1][j];
        
        int ans = -1,c=0;
for(int i=0; i < 2*switchesNo; i++)
{
    c=0;
    for(int j=0;j<bulbsNo; j++)
    if(v[i][j]%2==0)
    {
        c++;
    }
    if(c==bulbsNo)
    {ans = i+1;
        break;}
}
    cout << ans << endl;
    return 0;
}