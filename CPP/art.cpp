#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    for(int i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          return false;
      }
  }
  return true;
}

int main()
{
    int t;
    cin >> t;
    int Max=0;
    while(t--)
    {
        string s;
        cin >> s;
        multiset<int>count;
        int ans=0;
        Max=0;
        map<char, int>m;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }
        int sum=0, num=0;
        
        for(auto i: m)
        {
            if(i.second>Max)
            Max = i.second;
            if(i.second == 1)
            num++;
            // cout << i.first << i.second << endl;
            count.insert(i.second);
        }
        if(Max == 1 or m.size()<=1)
        ans = 0;
        else if(isprime(s.size()))
        {
           if(s.size()-Max < Max-1 or num != s.size()-Max)
           ans = min(s.size()-Max,s.size()-m.size()) ;
           else
           ans = Max-1;
           if(ans != s.size()-Max and s.size()>26)
           ans = s.size()-Max;
        }
        else
        {
            // for(auto i : count)
            // cout << i << " ";
            // cout << endl;
            // cout << "else part\n";
            int num_parts = 0;
            ans = s.size();
            int num_classes = m.size();
            // cout << "Num_classes: " << num_classes << endl;
            int factor=1;
            for(int i=1; i<=s.size(); i++)
            {
                int ans_temp=0;
                if(s.size()%i == 0)
                {
                    num_parts = (s.size()/i);
                    factor = s.size()/num_parts;
                    // cout << "num_parts: " << num_parts << endl;
                    if(num_classes>=num_parts and num_parts<=26)
                    {
                        // cout << "factor: " << factor << endl;
                        auto it = count.rbegin();
                        while(*it > factor)
                        {
                            ans_temp += *it - factor;
                            // cout << *it << endl;
                            it++;
                        }
                        // cout << "ans_temp: " << ans_temp << endl; 
                        int h=0;
                        for(auto iter=count.begin();h<num_classes-num_parts ; iter++)
                        {
                            ans_temp += *iter;
                            h++;
                        }
                        // cout << "ans_temp: " << ans_temp << endl;
                        if(ans_temp < ans)
                            ans = ans_temp;
                        // cout << ans << endl;
                        // cout << "----------\n";
                    } 
                    else if(num_classes<26)
                    {
                        // cout << "else...\n";
                        for(auto j : count)
                        {
                            if(j>factor)
                            ans_temp += j-factor;
                        }
                        if(ans_temp<ans and num_classes+ans_temp<=26)
                        ans=ans_temp;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}