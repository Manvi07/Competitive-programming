#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >>t;
	while(t--)
	{
		string s;
		cin >> s;
		long long sum = 0;
		for(int i=0; i<s.size(); i++)
		{
			sum += int(s[i] - '0');
		}
		// cout << sum << endl;
		int n = 10 - sum%10;
		s += to_string(n==10?0:n);
		cout << s<< endl;
	}
	return 0;
}