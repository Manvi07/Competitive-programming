#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class EquateNumbers {
public:


	string canMakeEqual(vector <int> A) {
	sort(A.begin(), A.end());

	for(int i=1; i<A.size(); i++)
	{cout << A[i];
	if(A[i]%A[0]!=0)
	return "no";
	return "yes";
	}}
};


// <%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
