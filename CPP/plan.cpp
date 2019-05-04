#include <bits/stdc++.h>
#define f(i,n) for(int i=0; i<n; i++)
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
    $
    int n, k;
    int p;
    map<int, int> m;
    cin >> n >> k;
    f(i,k)
    {
        cin >> p;
        m[p]++;
    }
    auto it = m.begin();
    // cout << it->first << it->second << endl;
    int days = 0;
    int Max = k/n;
    if(!(k/n))
    {
        cout << days << endl;
    }
    else
    {
        int cnt = 0 ;
        while(Max)
        {
            cnt = 0;
            
            for(it = m.begin();it!=m.end();it++)
            {;
                if(it->second >= Max)
                {
                    cnt += (it->second)/Max;
                }
                
            }
            if(cnt >= n)
                {
                    days = Max;
                    break;
                }
            else
            Max--;
        }

    cout << days << endl;
    }
    return 0;
}