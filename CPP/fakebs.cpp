#include <bits/stdc++.h>
using namespace std;
long long inv;
int n, q;
vector<long long> a;
bool g = true;

void merge(int x,int low,int high,int mid)
{
  int temp[high+1-low];
  int k=0,i=low,j=mid+1;
  while(i<=mid && j<=high)
  {
    if(a[i]<a[j])
    {
      temp[k]=a[i];
      if(temp[k]==x+1)
      g=false;
      else
      inv+=mid-i;
      k++;i++;
    }
    else
    {
      temp[k]=a[j];
      k++;j++;
    }
  }
  while(i<=mid)
  {
    temp[k]=a[i];k++;i++;
  }
  while (j<=high) {
    temp[k]=a[j];k++;j++;
  }
  for(int i=low;i<=high;i++)
  {a[i]=temp[i-low];}
}

void mergesort(int x,int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
    mergesort(x,low,mid);
    mergesort(x,mid+1,high);
    merge(x,low,high,mid);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    long long val;
    while(t--)
    {
      cin >> n >> q;
      for(int i=0; i<n; i++)
      {
        cin >> val;
        a.push_back(val);
      }
      for(auto i : a)
      cout << i << " ";
      cout << endl;
      long long  x;
      mergesort(1, 0, n-1);
      for(auto i : a)
      cout << i << " ";
      cout << endl;
      if(g)
      cout << inv;
      else
      cout << -1;
      cout<<endl;
    }
   return 0;
}
