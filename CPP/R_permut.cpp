#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> order;
vector<bool> indexTaken;
void printPermutations()
{
	if(order.size()==s.size())
	{
		//All conditions can be checked here, if no optimization is needed.
		for(auto z: order)
			cout << s[z];
		cout << endl;
	}
	else
	{
		for(int i=0; i<s.size(); ++i)
		{
			//Else check condition here, for optimization
			if(!indexTaken[i])
			{
				indexTaken[i]=true;
				order.push_back(i);
				printPermutations();
				order.pop_back();
				indexTaken[i]=false;
			}
		}
	}
}

int main() {
	cin >> s;
	indexTaken.assign(s.size(), false);
	printPermutations();
	return 0;
}