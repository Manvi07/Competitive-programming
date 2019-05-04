#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count[26]={};

    for(int i=0;i<n;i++)
    	count[s[i]-'a']++;
  	
  	if(count[s[0]]>1 and count[s[n-1]]>1)
  	{
  		string s1 = "";
  		s1+=s[0];
  		for(int i=1;i<n;i++)
  			{
  				s1 = s1+(s[i]);
  				if(s[i]==s[n-1])
  					break;
  			}

cout << s1 << endl;
	    int c=0;
	    auto nPos = s.find(s1, 0);
	     auto q = s.find(s1, 0); 
	    while(nPos != string::npos)
	    {
	        c++;
	        q = nPos;
	        nPos = s.find(s1, nPos + 1);
	        if(nPos!=string::npos and nPos - q == s1.size())
	        	cout << "yes\n";
	    }
	    cout << c << endl;
	}

    return 0;
}