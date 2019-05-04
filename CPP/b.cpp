#include <bits/stdc++.h>
using namespace std;

int main()
{  
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    if(n<3)
    cout << "No\n";
    else
    {
        vector<int> odd;
        vector<int> even;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            even.push_back(i);
            else
            odd.push_back(i);
        }
        cout << "Yes\n";
        cout << odd.size() << " ";
        for(auto j : odd)
        cout << j << " ";
        cout << endl;
        cout << even.size() << " ";
        for(auto j : even)
        cout << j << " ";
        cout << endl;
    }    
}