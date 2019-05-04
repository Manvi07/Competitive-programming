#include <iostream>
using namespace std;

bool prime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    if(n%i==0)
    c++;
    if(c==0)
    return true;
    else return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        for(i=2;i<n;)
        if(prime(i)==true && prime(n-i)==true)
        {
            break;
        }else i++;

        cout<<i<<" "<<n-i<<endl;
    }
    return 0;
}
