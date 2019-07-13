#include<bits/stdc++.h>
using namespace std;

int mod(string num, int a) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 


string comp(string a, string b)
{
    if(b.size() > a.size())
    return b;
    else if(a.size() > b.size())
    return a;
    for(int i = 0; i < a.length(); ++i)
        if ((a[i] - '0') < (b[i] - '0'))
        { 
            return b; 
        }
    return a;
}


int main()
{
    string s, b;
    cin >> s >> b;
    cout << comp(s, b) << endl;
    cout << stoi(s);
    return 0;
}