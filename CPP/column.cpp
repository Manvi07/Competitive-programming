#include <bits/stdc++.h>
using namespace std;


int fun(string A) {
    int ans = 1;int temp = -1;
    for(int i=0; i<A.size()-1; i++)
    {
        temp = int(A[i] - 'A' +1);
        ans *=temp*26;
    }
    cout << ans << endl;
    ans += int(A[A.size()-1] - 'A' +1);
    if(temp == -1)
    ans -- ;
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << fun(s) << endl;
    return 0;
}