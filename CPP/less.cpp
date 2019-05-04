#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    sort(a,a+n);
    if(k==0 and a[0]>1)
    cout << a[0]-1 << endl;
    else if((k==0 and a[0]<=1)or (a[k-1]==a[k] and k<n))
    cout << -1 << endl;
    else
    cout << a[k-1] <<endl;
    return 0;
}
