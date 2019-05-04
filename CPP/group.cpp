#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int a[M][M] = {0};
    int s1, s2;
    for(int i=0; i< M; i++)
    {
        cin >> s1 >> s2;
        a[s1-1][s2-1] = 1;
    }
    
    return 0;
}