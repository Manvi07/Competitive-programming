#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=0;
        long int count1=0,count2=0;
        for(int i=0;i<s.size();i++)
        {
            if(i and count1 and count2 and s[i]=='1' and s[i-1]=='0')
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
            else if(s[i]=='1')
                count1++;
            else if(s[i]=='0')
            count2++;

        }if(count1==0)
        cout<<"NO\n";
        else if(flag==0 )
        cout<<"YES\n";
    }
    return 0;
}