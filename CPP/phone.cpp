#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 int main()
 {
     $
     int n;
     cin >> n;
     int a;
     vector<long long>v;
     for(int i=0;i<n;i++)
     {
         cin >> a;
         v.push_back(a);
     }
     sort(v.begin(), v.end());
     long long max = 0;
     for(int i=0;i<n;i++)
     {
         if((n-i)*v[i]>max)
         max = (n-i)*v[i];
     }
     cout << max << endl;
     return 0;
 }