#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++)
    a[i]=i+1;
    for(int i=0;i<n;i++)
    {
        int j = rand()%n;
        swap(a[j], a[i]);
    }
    for(int i=0;i<n;i++)
    cout << a[i] << " ";
    cout << endl;
    for(int i=n-1;i>=0;i--)
    cout << a[i] << " ";
    cout << endl;
    return 0;
}