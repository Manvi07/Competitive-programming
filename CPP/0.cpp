#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[26]={};
    for(int i=0;i<n;i++)
    a[s[i]-'A']++;
    int l=s.size();
    for(int i=0;i<k;i++)
    if(l>a[i])
    l=a[i];
    cout << k*l << endl;
    return 0;
}