#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countA = 0, countB = 0, A = 0, B = 0;
    for(auto i : s)
    {
        if(i == 'A')
        {
            countA++;
            countB--;
        }
        else
        {
            countB++;
            countA--;
        }
    }
    if(countA < 0) countA = 0;
    if(countB < 0) countB = 0;
    A = max(countA,A);
    B = max(countB,B);
    cout << A+B+1 << endl;
    return 0;
}