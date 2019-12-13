#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>ans;
        vector<int>v(n);
        int odd =0;
        for(int i=0; i<n;i++)
        {
            cin >> v[i];
            if(v[i]%2!=0)
            odd++;
        }
        if(odd < k)
            cout << "NO" << endl;
        else if(odd == k)
        {
            cout << "YES" << endl;
            if(k == 1)
            cout << n;
            else
            for(int i=0; i<n; i++)
            {
                if(v[i]%2!=0)
                ans.push_back(i+1);
                else
                {
                    continue;
                }
            }
            for(int i=0; i<ans.size(); i++)
            {
                if(i == ans.size()-1)
                cout << max(ans[i], n);
                else
                {
                    cout << ans[i] << " ";
                }
            }
            cout << endl;
        }
        else
        {
            if(k==1)
            {
                if(odd%2 == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                    cout << n << endl;
                }
            }
            else
            {
                if(odd%2 != 0)
                {
                    if(k%2==0)
                    cout << "NO" << endl;
                    else
                    {
                        cout << "YES" << endl;
                        int p = 0;
                        for(int i=0; i<n && p<k; i++)
                        {
                            if(v[i]%2!=0)
                            {
                                p++;
                                ans.push_back(i+1);
                            }
                        }
                         for(int i=0; i<ans.size(); i++)
                        {
                            if(i == ans.size()-1)
                            cout << max(ans[i], n);
                            else
                            {
                                cout << ans[i] << " ";
                            }
                        }
                        cout << endl;
                    }
                }
                else
                {
                    if(k%2!=0)
                    cout << "NO" << endl;
                    else
                    {
                        cout << "YES" << endl;
                        int p = 0;
                        for(int i=0; i<n && p<k; i++)
                        {
                            if(v[i]%2!=0)
                            {
                                p++;
                                ans.push_back(i+1);
                            }
                        }
                         for(int i=0; i<ans.size(); i++)
                        {
                            if(i == ans.size()-1)
                            cout << max(ans[i], n);
                            else
                            {
                                cout << ans[i] << " ";
                            }
                        }
                        cout << endl;
                    }
                    
                }
                
            }

        }        
    }
    return 0;
}