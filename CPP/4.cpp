#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j=1; j<=t; j++){
        int n;
        cin >> n;
        int a = 0;
        string s = to_string(n);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '4')
            {
                a += pow(10,s.size()- 1-i);
                n = n-pow(10, s.size()-1-i);   
            }
        }
        cout <<"Case #" <<j << ": "<< a << " " << n << endl;
    }
    return 0;
}