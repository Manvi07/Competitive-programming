#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

long long int getBlockSize(long long value) {
  return (long long int)(floor(log2(value)));

}

  vector<long long >iterator::it;
vector<long long > f(long long n)
{
    vector<long long>v;
    do
    {
        v.push_back(pow(2,(int)(floor(log2(n)))));
        n=n-pow(2,(int)(floor(log2(n))));

    }while(n!=pow(2,(int)(floor(log2(n)))));

    v.push_back(pow(2,(int)(floor(log2(n)))));
    return v;
}

int main()
{ $
    int n,k;
    cin>>n>>k;
    int a;long long sum=0;
    multiset<int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        m.insert(a);
        sum+=a;
    }
    long long h;
    while(k--)
    {
      cin>>h;
      long long c=0;
      if(sum<h)
      {
        cout<<"-1\n";
      }
      else
      {
        if(h%2!=0)
        {
          it=m.find(1);
          if(it==m.end())
          {cout<<-1<<endl;}
          else
          {h=h-1;c++;}
        }
        if(h%2==0 or c)
        while(h)
        {
          it=m.find(f(h)[0]);
          if(it!=m.end())
          {h=h-f(h)[0];c++;m.erase(it);}
          else
          {
            long long p=h/2;
            while(p)
            {
              it=m.find(f(p)[0]);
              if(it!=m.end())
              {
                p=p-f(p)[0];
                h=h-f(p)[0];
                c++;
                m.erase(it);
              }
              else
              p=p/2;
            }
          }
        }
      }
      cout<<c<<endl;
    }
    return 0;
}
