#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        map<int, long long> even;
        map<int, long long> odd;
        int num;
        long long n1=0, n2=0;
        for(int i=0;i<n;i++)
        {
            cin >> num;
            if(num%2==0)
            {
                even[num]++;
                n1++;
            }
            else
            {
                odd[num]++;
                n2++;
            }
        }
        long long temp, ans=0;
        
        for(auto i=even.begin();i!=even.end();i++)
        {
            n1 = n1 - i->second;
            if((i->first)%4==0 and even.find((i->first)+2)!=even.end())
            {
                temp = n1-even.find((i->first)+2)->second;
                ans += i->second*temp;
            }
            else
            ans += i->second*n1;
        }
        for(auto i=odd.begin();i!=odd.end();i++)
        {
            n2 = n2 - i->second;
            if((i->first)%4==1 and odd.find((i->first)+2)!=odd.end())
            {
                temp = n2-odd.find((i->first)+2)->second;
                ans += i->second*temp;
            }
            else
            ans += i->second*n2;
        }
        cout << ans << endl;
    }
    return 0;    
}