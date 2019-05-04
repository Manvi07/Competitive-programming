#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int N;int val;
    cin>>N;
    vector <int>e;
    vector <int>o;
    for(int i=0;i<N;i++)
    {cin>>val;if(val%2==0)e.push_back(val);else o.push_back(val);}
    int n=0;
    if(e.size()!=0)n+=1;
    if(o.size()%2==0 || o.size()==1)n+=1;
    else n+=2;
    if(o.size()!=1)
    if(e.size()!=0 && o.size()%2==0)n=n-1;
    else if(e.size()!=0 && o.size()%2!=0)n=n-1;
    if(e.size()==0 && o.size()==0)n=0;
    cout<<n<<endl;
  }
  return 0;
}
