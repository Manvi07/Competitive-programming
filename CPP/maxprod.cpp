#include<bits/stdc++.h>
using namespace std;


int func(vector<int> &A) {
    vector<pair<int, int> >p;
    int s, k;
    for(int i=1;i<A.size()-1; i++)
    {
        s = i, k=i;
        while(s>=0)
        {
            if(A[i]>=A[s] and s>=0)
            s--;
            else
            break;
        }
        while(k<A.size())
        {
            if(A[i]>=A[k] and k<A.size())
            k++;
            else
            break;
        }
        if(A[i] >= A[k] or k>=A.size())
        k = 0;
        // else if(A[k]>A[i])
        // k++;

        if(s<0)
        s = 0;
        // else if(A[s]>A[i])
        // s++;

        p.push_back({s, k});
    }
    int ans = 0;
    cout << A.size() << endl;
    for(int i = 0; i<p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
        if(p[i].first*p[i].second >= ans)
        {
            ans = p[i].first*p[i].second;
        }
    }
    return ans;
}
int main()
{
    vector<int> A = {  7, 5, 7, 9, 8, 7 };
    cout << func(A) << endl;
    return 0;
}