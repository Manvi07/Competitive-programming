#include <bits/stdc++.h>
using namespace std;

string add(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    if(len1 > len2)
    for(int i=0; i < len1 - len2; i++)
    s2.insert(0, "0");
    else if(len2 > len1)
    for(int i=0; i < len2 - len1; i++)
    s1.insert(0, "0");
    
    int num = 0, c = 0;
    string ans = "";
    string temp;
    for(int i=s1.size()-1; i>=0; i--)
    {
        num = int(s1[i] - '0') + int (s2[i] - '0') + c;
        temp = to_string(num);
        if(temp.size() == 1)
        {
            c = 0;
            ans += temp[0];
        }
        else
        {
            c = int(temp[0] - '0');
            ans += temp[1];
        }        
    }
    if(temp.size()>1)
    ans += temp[0];
    reverse(ans.begin(), ans.end());
    return ans;
}

string minString(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    
    if(len1 == 0 or (len2 < len1 and len2 !=0))
    {
        return s2;
    }
    if (len2 == 0 or (len1 < len2 and len1 != 0))
    {
        return s1;
    }
    
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] < s2[i])
        return s1;
        if(s2[i] < s1[i])
        return s2;
    }
    return s1;
}

int main()
{
    int l;
    cin >> l;
    string s;
    cin >> s;
    vector <bool> v(l);
    v[l-1] = false;
    for(int i=1; i<l; i++)
    {
        v[i-1] = false;
        if(s[i] == '0')
        v[i-1] = true;
    }
    
    // unsigned long long ans1 = ULLONG_MAX, ans2 = ULLONG_MAX;
    string ans1, ans2;
    if(v[(l/2) - 1] == false)
    {
        string n1 = s.substr(0, l/2);
        string n2 = s.substr(l/2, l-l/2);
        // cout << n1  << " " << n2 << endl;
        ans1 = add(n1, n2);
        if(l%2 !=0 and v[l/2] == false)
        {
            string N1 = s.substr(0, l/2 + 1);
            string N2 = s.substr(l/2+1, l-l/2);
            // cout << N1  << " - " << N2 << endl;
            ans2 = add(N1, N2);
        }
        cout << minString(ans1, ans2) << endl;
    }
    else
    {
        int k = l/2-1;
        while(v[k] == true and k<l-1)
        {
            k++;
        }
        // cout << k << endl;
        if(k<l-1)
        {
            string n1 = s.substr(0, k+1);
            string n2 = s.substr(k+1, l-k-1);
            // cout << n1  << "  " << n2 << endl;
            ans1 = add(n1, n2);
        }
        k = l/2-1;
        while(v[k] == true and k>0)
        {
            k--;
        }
        // cout << k << endl;
        if(k>0 or (k==0 and v[k] == false))
        {
            string N1 = s.substr(0, k+1);
            string N2 = s.substr(k+1, l-k-1);
            // cout << N1  << "-" << N2 << endl;
            ans2 = add(N1, N2);
        }
        cout << minString(ans1, ans2) << endl;
    }

    return 0;
}