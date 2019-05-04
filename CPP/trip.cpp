#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >>k;
    int a[12];
    for(int i=0;i<12;i++)
    cin >> a[i];
    sort(a, a+12, greater<int>());
    int i=0;
    while(k>0 and i<12)
    {
        k = k-a[i];
        i++;
    }
    if(k>0)
    cout << -1 << endl;
    else
    cout << i << endl;
    return 0;
}