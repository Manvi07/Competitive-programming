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


string maxString(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    if(len1 > len2)
    for(int i=0; i < len1 - len2; i++)
    s2.insert(0, "0");
    else if(len2 > len1)
    for(int i=0; i < len2 - len1; i++)
    s1.insert(0, "0");
    
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] > s2[i])
        return s1;
        if(s2[i]>s1[i])
        return s2;
    }
    return s1;
}


int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << add(s1, s2) << endl;
    cout << maxString(s1, s2) << endl;
    return 0;
}