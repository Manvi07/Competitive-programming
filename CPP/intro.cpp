#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, r;
    cin >> n >> r;
    while(n--)
    {
        cin >> a;
        if(a<r)
        cout << "Bad boi\n";
        else 
        cout << "Good boi\n";
    }
    return 0;
}