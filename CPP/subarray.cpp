#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        bool soln = false;
        for(int i=0; i<n-1; i++)
        {
            if(abs(v[i]-v[i+1]) >= 2)
            {
                cout << "YES\n";
                cout << i+1 << " " << i+2 << endl;
                soln = true;
                break;
            } 
        }
        if(!soln)
        cout << "NO\n";
        
    }
    return 0;    
}