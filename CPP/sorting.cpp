#include <bits/stdc++.h>
using namespace std;

 int main(int argc, char const *argv[])
 {
     int t;
     cin >> t;
     while(t--)
     {
         int n;
         cin >>n;
         string s;
         cin >> s;
         int ans = 0;
         vector<int>a, b;
         int c1=0, c2=0;
         for(int i=0; i<n; i++)
         {
             if(s[i] == 'a')
                c1++;
             else
                c2++;
         }
         for(int i=0; i<c1; i++)
         if(s[i] == 'b')
         b.push_back(i);
         for(int i=c1; i<n;i++)
         if(s[i] == 'a')
         a.push_back(i);
         for(int i=0; i<a.size(); i++)
         {
             ans += a[i] - b[i];
            //  cout << ans << e/ndl;
         }
         cout << ans <<endl;
     }
     return 0;
 }
 