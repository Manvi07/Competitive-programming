    #include <bits/stdc++.h>
    using namespace std;

    int Coins = 1000, c;

    void func2(int start, int end, int &ans)
    {
        int v;
        int a = end;
        while(v!=0 and end>0)
        {
            Coins--;
            cout << 1 << " " << end << endl;
            cin >> v;
            // cout << "Coins: " << Coins << endl;
            if(v==1)
            a = end;
            end--;
        }
        ans = a;
    }

    void func(int start, int end, int &ans)
    {
        // cout << "Coins: " << Coins << endl;
        int mid = (start+end)/2;
        if(start == end)  
        {
            ans = start;
            return;
        }
        if(mid == start or mid == end)
        {
            ans = end;
            return;
        }
        if(Coins<=0) return;
        int verdict;
        
        cout << 1 << " " << mid << endl;
        cin >> verdict;
        if(verdict == 1)
        {
            cout << 2 << endl;
            Coins = Coins - c;
            ans = mid;
            if(c<mid-start)
            func(start, mid, ans);
            else
            func2(start, mid, ans);
        }    
        
        else
        {
            Coins--;
            func(mid, end, ans);
        }
        
    }

    int main()
    {
        int n;
        cin >> n >> c;
        int a = 0, i=0;
        func(0, n, a);
        cout << 3 << " " << a << endl;
        return 0;
    }