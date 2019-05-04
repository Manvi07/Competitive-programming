#include <bits//stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    getchar();
    while(t--)
    {
        bool check = false;
        getline(cin, s);
        s.insert(0, " ");
        s = s+ " ";
        if (s.find(" not ") != std::string::npos) {
            check = true;
        }
        if(check)
        cout << "Real Fancy" << endl;
        else
        cout << "regularly fancy" << endl;
    }
    return 0;
}