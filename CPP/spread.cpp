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
        vector<int> x(n);
        vector<int> v;
        v.push_back(1);
        int j=0;
        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
            if(i>0)
            {
                if(x[i] - x[i-1] > 2)
                {
                    v.push_back(1);
                    j++;
                }
                else
                {
                    v[j]++;
                }   
            }
        }
        sort(v.begin(), v.end());
        cout << v[0] << " " << *v.rbegin() << endl;
    }
    return 0;
}