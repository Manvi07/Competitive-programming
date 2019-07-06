#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    double sum = 0;
	    int n;
	    cin >> n;
	    vector<double> v(n);
	    for(int i=0; i<n; i++)
	    {
	        cin >> v[i];
	        sum += v[i];
	    }
	    double mean = sum/n;
	    // cout << mean << endl;
	    
	    {
	        for(int i=0; i<n; i++)
	        {
	            if(mean == v[i])
	            {
	                cout << i+1 << endl;
	                break;
	            }
	            else if(i == n-1)
	            cout << "Impossible" << endl;
	        }
	    }
	}
	return 0;
}
