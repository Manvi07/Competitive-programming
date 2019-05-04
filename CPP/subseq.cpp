#include<bits/stdc++.h>
using namespace std;

 vector<vector<int> >v(26);
int main(int argc, char const *argv[])
{
    string a, b;
    cin >> a >> b;  
    int index = 0;
    for(int i=0; i<a.size(); i++)
    {
        v[int(a[i] - 'a')].push_back(i);
    }
    // for(int i=0; i<26; i++)
    // {
    //     for(auto j : v[i])
    //     cout << j << " ";
    //     cout << endl;   
    // }
    bool flag = true;
    int ans = 1;
    for(int i=0; i<b.size();i++)
    {
        if(v[int(b[i] - 'a')].empty())
        {
            flag = false;
            break;
        }
        // cout << "Index: " << index << endl;
        cout<<"---\n";
        for(auto j : v[int(b[i]-'a')])
        cout << j << " ";
        cout << endl; 
        auto k = upper_bound(v[int(b[i]-'a')].begin(), v[int(b[i]-'a')].end(), 8);
        if(index > v[int(b[i] - 'a')][k-v[int(b[i]-'a')].begin()-1])
            {ans++; index = v[int(b[i] - 'a')][0];cout <<"yo\n";}
        else index = *k+1;
        cout <<index<< endl;
    }
    if(!flag)
    ans = -1;
    cout << ans << endl;
    return 0;
}
