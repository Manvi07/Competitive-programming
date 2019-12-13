#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v , int l, int m, int h, int &cnt)
{
  int n1=m-l+1;
  int n2=h-m;
  vector<int>left, right;

  for(int i=0; i<n1; i++)
  {
    left.push_back(v[l+i]);
  }
  for(int i=0; i<n2; i++)
  {
    right.push_back(v[m+i+1]);
  }
  int i=0, j=0, k=l;
  // cout << "yo\n";/
  while(i<n1 and j<n2)
  {
    if(left[i]<right[j])
    {
      v[k] = left[i];
      i++;
    }
    else
    {
      v[k] = right[j];
      j++;
      cnt+=m-i+1;
    }
    k++;
  }
  while(i<n1)
  {
    v[k] = left[i];
    i++;
    k++;
    // cnt++;
  }
  while(j<n2)
  {
    v[k] = right[j];
    j++;k++;

  }

}

void mergesort(vector<int> &v, int l, int h , int &cnt)
{
  if(h>l)
  {
    int mid = (h+l)/2;
    // cout << v[mid] << endl;
    mergesort(v, l, mid, cnt);
    mergesort(v, mid+1, h, cnt);
    merge(v, l, mid, h, cnt);
  }
  return;
}

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n ;i++)
  cin >> v[i];
  int cnt=0;
  mergesort(v, 0, n-1, cnt);
  for(auto i:v)
  cout << i << " ";
  cout << endl << cnt;
  return 0;
}
