#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int r;
  cin>>r;
  int c[r];
  for(int i=0;i<r;i++)
  cin>>c[i];int val;
  vector < vector<int> >v(r);
// for(int i=0;i<r;i++) v[i].resize(c[i]);
  for(int i=0;i<r;i++){
  v[i]=vector<int>(c[i]);
  // cout<<"hgdsj\n";
  for(int j=0;j<c[i];j++)
  {cin>>val;v[i][j]=(val);}}
  for(int i=0;i<r;i++)
  {for(int j=0;j<c[i];j++)
  cout<<v[i][j]<<" ";cout<<endl;}
  return 0;
}
