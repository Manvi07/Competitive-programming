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
        vector<int>v(2*n);
        vector<int>temp(n);
        int index, min = INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            temp[i] = v[i];
            v[n+i] = v[i];
            if(v[i] < min)
            {
                min = v[i];
                index = i;
            }
        }
        // cout << min <<endl;
        bool flag = true;
        sort(temp.begin(), temp.end());
        for(int i = index; i < index+n; i++)
        {
            cout << v[i] << " ";
            if(temp[i-index] != v[i])
            {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        
        if(flag)
        {
            cout << "YES\n";
        }        
    }
}