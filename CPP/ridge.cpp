#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long numr=0;
        for(int i=0; i<n; i++)
        {
            numr = numr*2 + pow(-1, i);
        }
        cout << numr << " " <<  long(pow(2, n)) << " ";
    }
    cout << endl;
    return 0;
}