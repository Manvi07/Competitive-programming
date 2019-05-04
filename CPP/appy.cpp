#include <bits/stdc++.h>
using namespace std;

int m = 0, start, e;
int longestArr(deque<int> d)
{
    set<int>v;
    for(int i=0; i<d.size(); i++)
    {
        int temp = i;
        int c = 0;
        while(d[i] == 1 and i<d.size())
        {
            i++;
            c++;
        }
        if(m<i-temp)
        {
            m = i-temp;
            start = temp;
            e = i-1;
        }
        v.insert(c);
    }
    return *v.rbegin();
}

int main()
{
    int n, q, k;
    cin >> n >> q >> k;
    deque<int>d;
    int a;
    for(int i =0;i<n;i++)
    {
        cin >> a;
        d.push_back(a);
    }
    string s;
    cin >> s;
    int ans = min(longestArr(d), k);
    
    for(auto i : s)
    {
        if(i == '!')
        {
            if(start == 0 and e != n-1 and d.back() == 1)
            {
                e++;
                ans = min(ans+1, k);
            }
            else if(start != 0 and e == n-1 and d.back() == 1)
            {
                start++;
                int k = 0;
                // int c = 0;
                while(d[k] == 1 and k<n)
                {
                    k++;
                }
                if(k>ans)
                {
                    ans = k;
                }

            }

            d.push_front(d.back());
            d.pop_back();

            for(auto i : d)
            cout << i ;
            cout << endl;
        }
        else
        {
            cout << ans <<endl;
            cout << start << " " << e << endl;
        }
    }
    return 0;
}