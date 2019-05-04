#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    set<int>s;
    int c=0;
    for(int i =1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            c++;
        }
        else
        {
            s.insert(c+1);
            c=0;
        }
    }
    s.insert(c+1);
    cout << *(s.rbegin()) << endl;
}