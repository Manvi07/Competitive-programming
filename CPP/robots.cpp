#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int> >loc(n);
        vector<pair<int, int> >horiz(n);
        vector<pair<int, int> >vert(n);
        bool up, down, left, right;
        up = down = left = right = false;
        for(int i=0; i<n; i++)
        {
            cin >> loc[i].first >> loc[i].second;
            cin >> horiz[i].first >> vert[i].second >> horiz[i].second >> vert[i].first; 
            if(horiz[i].first == 0)
            left = true;
            if(horiz[i].second == 0)
            right = true;
            if(vert[i].first == 0)
            down = true;
            if(vert[i].second == 0)
            up = true;
        }
        int X = -100000, Y = -100000, ans = 1;
        bool flag = true;
        int upperlimit = 100000, lowerlimit = -100000, rightlimit = 100000, leftlimit = -100000;
        if(n == 1)
        {
            ans = 1;
            X = loc[0].first;
            Y = loc[0].second;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(vert[i].first == 0)
                {
                    if(upperlimit >= loc[i].second)
                    upperlimit = loc[i].second;
                    else
                    {
                        cout <<"p1\n";
                        ans = 0;
                        flag = false;
                        break;
                    }
                }
                if(vert[i].second == 0)
                {
                    if(lowerlimit <= loc[i].second)
                    {
                        lowerlimit = loc[i].second;
                    }
                    else
                    {
                        cout <<"p2\n";
                        ans = 0;
                        flag = false;
                        break;
                    }
                }
                if(horiz[i].second == 0)
                {
                    if(leftlimit <= loc[i].first)
                    leftlimit = loc[i].first;
                    else
                    {
                        cout <<"p3\n";
                        ans = 0;
                        flag = false;
                        break;
                    }
                    
                }
                if(horiz[i].first == 0)
                {
                    if(rightlimit >= loc[i].first)
                    rightlimit = loc[i].first;
                    else
                    {
                        cout <<"p4\n";
                        // cout << rightlimit <<" "<<loc[i].first <<endl;
                        ans = 0;
                        flag = false;
                        break;
                    }
                    
                }
                // cout << "YO: ";
                // cout << rightlimit <<" "<<loc[i].first <<endl;

            }
            if(rightlimit<leftlimit or upperlimit < lowerlimit)
            {
                // cout << "Yo:  " << upperlimit <<" " << lowerlimit << " " << leftlimit << " " << rightlimit << endl;
                ans = 0;
                flag = false;
            }
            X = rightlimit;
            Y = lowerlimit;
        }
        cout << ans << " ";
        if(flag)
        cout << X << " " << Y ;
        cout<< endl;
        
    }
    return 0;
}