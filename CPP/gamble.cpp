 #include <bits/stdc++.h>
#define A true
#define B false
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
    cin >> a[i];
    for(int i=0;i<n;i++)
    cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long scoreA = 0;
    long long scoreB = 0;
    bool turn = A;
    while(!a.empty() and !b.empty())
    {      
        if(turn==A)
        {
            if(a.back() >= b.back())
            {
                scoreA += a.back();
                a.pop_back();
            }
            else
            {
                b.pop_back();
            }
            turn = B;
        }
        else
        {
            if(b.back() >= a.back())
            {
                scoreB += b.back();
                b.pop_back();
            }
            else
            {
                a.pop_back();
            }
            turn = A;
        }
    }
    if(!a.empty())
    {
        if(turn==A)
        {
            while(!a.empty())
            {
                scoreA += a.back();
                a.pop_back();
                if(!a.empty())
                a.pop_back();
            }
        }
        else
        {
            while(!a.empty())
            {
                a.pop_back();
                if(!a.empty())
                {scoreA += a.back();
                a.pop_back();}
            }
        }
    }
    else if(!b.empty())
    {
        if(turn==B)
       {
            while(!b.empty())
            {
                scoreB += b.back();
                b.pop_back();
                if(!b.empty())
                b.pop_back();
            }
        }
        else
        {
            while(!b.empty())
            {
                b.pop_back();
                if(!b.empty())
                {scoreB += b.back();
                b.pop_back();}
            }
        }
    }
    cout << scoreA-scoreB << endl;
    return 0;
}

