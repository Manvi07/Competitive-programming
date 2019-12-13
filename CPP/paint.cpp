#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n ;i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	vector<int> visited(n, 0);
int count=0;
	for(int i=0; i<n; i++)
	{
		if(visited[i] == 0)
		{
			count ++;
			for(int j=0; j<n ;j++)
			{
				if(j != i and v[j]%v[i] == 0)
				{
					visited[j] = 1;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}