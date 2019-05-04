#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    multiset<int> s;
    for(int i=0; i<n;i++)
    {
        cin >> a;
        s.insert(a);
    }
    // for(auto i: s)
    // cout << i << " ";
    // cout << endl;
    int highest = *s.rbegin();
    int secHighest = *(++s.rbegin());
    int lowest = *s.begin();
    int secLowest = *(++s.begin());
    int it;
    // cout << highest << endl;
    // cout << secHighest << endl;
    // cout << lowest << endl;
    // cout << secLowest << endl;
    if(secHighest-lowest < highest - secLowest)
    it = secHighest - lowest;
    else
    it = highest - secLowest;
    cout << it << endl;
    return 0;
}