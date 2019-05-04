#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    deque<long long>d;
    long long a;

    for(int i=0;i<n;i++)
    {
        cin >> a;
        d.push_back(a);
    }
    long long s2=0,s1=0,sum1=0;
    s1 += d.front();
        d.pop_front();
    while(!d.empty())
    {
        if(s1==s2)
        {
            sum1=s1;
            s1+=d.front();
            d.pop_front();
        }
        else if(s1<s2)
        {
            s1+=d.front();
            d.pop_front();
        }
        else
        {
            s2+=d.back();
            d.pop_back();
        }
    }
    if(s1==s2)
    sum1 = s2;
    cout << sum1 << endl;
    return 0;
}