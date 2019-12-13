#include<bits/stdc++.h>
using namespace std;

int init_var1 = 12;
int init_var2 = 20;

int uninit_var1, uninit_var2;

char *c;

void func(int n)
{
    if(n < 0)
    return;
    // cout << n << endl;
    cout << "_localVar @ " << (unsigned long long)&n << endl;
    
    func(n-1);
}

int main()
{
    c = new char;
    cout << "Enter the No. of recursive calls: ";
    cin >> uninit_var1;
    func(uninit_var1);
    cout << "_main @ " << (unsigned long long)&main << endl;
    cout << "_func @ " << (unsigned long long)&func << endl;
    cout << "_init_var1 @ " << (unsigned long long)&init_var1 << endl;
    
    return 0;
}