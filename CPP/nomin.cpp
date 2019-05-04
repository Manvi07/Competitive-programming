#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define max 1000000007

long long val;
void combinationUtil(int arr[], int n, int r,
					int index, int data[], int i);

void printCombination(int arr[], int n, int r)
{
	int data[r];
	combinationUtil(arr, n, r, 0, data, 0);
}

void combinationUtil(int arr[], int n, int r, int index,int data[], int i)
{
	if (index == r)
	{
    set<int>s;
		for (int j = 0; j < r; j++)
		{
        s.insert(data[j]);
		}
		s.erase(s.begin());
    s.erase(--s.end());
		
    for(auto i : s)
    val = ((val%max)*(i%max))%max;
		return;
	}
	if (i >= n)
		return;
	data[index] = arr[i];
	combinationUtil(arr, n, r, index + 1, data, i + 1);

	combinationUtil(arr, n, r, index, data, i + 1);
}

int main()
{
  $
  int t;
  cin >> t;
  while(t--)
  {
    val = 1;
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    printCombination(a, n, k);
    std::cout << val << '\n';
  }
}
