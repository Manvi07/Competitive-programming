#include <bits/stdc++.h>
#define f(i,n) for(int i=0; i<n; i++)
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = s[0] - 'a' + 1;
    k--;
    int i = 1;
    char temp = s[0];
    while(k and i<s.size())
    {
        if(s[i]-temp>1)
        {
            cnt += s[i] - 'a' + 1;
            k--;
            temp = s[i];
        }
        i++;
    }
    if(k)
    cout << -1 << endl;
    else
    cout << cnt << endl;
    return 0;
}
